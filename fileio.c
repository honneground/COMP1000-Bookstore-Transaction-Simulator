#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"
#include "fileio.h"
#define MAX_LINE_LENGTH 256

int readinBookData(char* line, LinkedList* bookList) {
    int result;
    Book* book = (Book*)malloc(sizeof(Book));

    result = sscanf(line, "%d %63[^|] | %127[^|] | $%lf\n", &book->bookID, book->bookTitle, book->bookAuthor, &book->bookPrice);
    if (result == 4) {
        insertLast(bookList, book);
        result = 0;
    }else{
        free(book);
        book = NULL;
        result = 1;
    }
    return result;
}

int readinProductData(char* line, LinkedList* productList) {
    int result;
    double productPrice = 0;
    Product* product = (Product*)malloc(sizeof(Product));
    result = sscanf(line, "%5s - %127[^-] - $%lf", product->productCode, product->productName, &productPrice);
    if (result == 3) {
        product->productPriceInCents = (int)(productPrice * 100); 
        insertLast(productList, product);
        result = 0;
    }else{
        free(product);
        product = NULL;
        result = 1;
    }
    return result;
}

Bookstore* readBookstoreFromFile(const char* bookFilename, const char* productFilename) {
    int result;
    char line[MAX_LINE_LENGTH];
    LinkedList* bookList;
    LinkedList* productList;
    Bookstore* bookstore;
    FILE* bookFile = fopen(bookFilename, "r");
    FILE* productFile = fopen(productFilename, "r");

    if (bookFile == NULL || productFile == NULL) {
        if (bookFile != NULL) {
            fclose(bookFile);
        }
        if (productFile != NULL) {
            fclose(productFile);
        }
        return NULL;
    }
    bookList = createLinkedList();
    productList = createLinkedList();



    while (fgets(line, MAX_LINE_LENGTH-1, bookFile) != NULL) {
        result = readinBookData(line, bookList);
        if (result == 1 && getSize(bookList) < 1) {
            fclose(bookFile);
            fclose(productFile);
            clearData(bookList);
            freeList(bookList);
            clearData(productList);
            freeList(productList);
            return NULL;
        }
    }

    fclose(bookFile);

    while (fgets(line, MAX_LINE_LENGTH-1, productFile) != NULL) {
        result = readinProductData(line, productList);
        if (result == 1 && getSize(productList) < 1){
            fclose(productFile);
            clearData(bookList);
            freeList(bookList);
            clearData(productList);
            freeList(productList);
            return NULL;
        }
    }

    
    fclose(productFile);

    bookstore = (Bookstore*)malloc(sizeof(Bookstore));

    bookstore->books = bookList;
    bookstore->products = productList;

    return bookstore;
}

void freeBookstore(Bookstore* bookstore){
    clearData(bookstore->books);
    clearData(bookstore->products);
    freeList(bookstore->books);
    freeList(bookstore->products);
    free(bookstore);
    bookstore = NULL;
}




void convertBookIDsToHex(Bookstore* bookstore) {
    FILE* outfile = fopen("book_ids.txt", "w");
    struct BookIDs ;
    int looptimes;
    int count = 0;
    struct  {
        unsigned int id1 : 4; 
        unsigned int id2 : 4;
    }bookIDs;
    int numBooks = getSize(bookstore->books);
    Book* book;
    int i;
    unsigned char unsignedchar;
    if(numBooks%2 == 0) looptimes = numBooks/2;
    else looptimes = numBooks/2+1;
    

    for (i = 0; i < looptimes; i++) {
        unsignedchar = 0000;
        book = getElement(bookstore->books, count); 
        bookIDs.id1 = book->bookID; 
        unsignedchar |= bookIDs.id1;
        count += 1;
        
        if (count < numBooks) {
            unsignedchar <<= 4;
            book = getElement(bookstore->books, count);
            bookIDs.id2 = book->bookID;
            unsignedchar |= bookIDs.id2; 
            /* "There are two approaches to printing the binary value to a hexadecimal value. But the #x approach will disable the formatting feature in C and remove the flexibility to make the outputs exactly the same as the instruction where the 0x is in lower case and the a to f is in upper case." */
            /*fprintf(outfile, "%#x\n", unsignedchar);*/
            fprintf(outfile, "0x%02X\n", unsignedchar);
            count += 1;
        } else {
            /*fprintf(outfile, "%#xs\n", unsignedchar);*/
            fprintf(outfile, "0x%XS\n", unsignedchar); 
        }        
    }
    printf("\nBook IDs coverted and writed to the file 'book_ids.txt'.\n");
    fclose(outfile);
}