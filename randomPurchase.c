#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "fileio.h"
#include "linkedlist.h"


int isIndexSelected(const int* selectedIndices, int index) {
    int i = 0;
    while (selectedIndices[i] != -1) {
        if (selectedIndices[i] == index) {
            return 1;
        }
        i++;
    }
    return 0;
}

int getMaxFileNameLength(Book** books, Product** products) {
    int maxLength = 0;
    int i;
    int length;
    for (i = 0; i < 3; i++) {
        length = strlen(books[i]->bookTitle);
        if (length > maxLength) {
            maxLength = length;
        }
    }
    for (i = 0; i < 2; i++) {
        length = strlen(products[i]->productName);
        if (length > maxLength) {
            maxLength = length;
        }
    }
    return maxLength+1;
}

int generateRandomPurchases(Bookstore* bookstore) {
    int i;
    double total = 0.0;
    int randomIndex;
    int numProducts = getSize(bookstore->products);
    int numBooks = getSize(bookstore->books);
    int quantities[2];
    double subtotal;
    int nameWidth;
    Book* books[3];
    Book* book;
    Product* products[2];
    Product* product;
    int selectedBookIndices[3] = {-1, -1, -1};
    int selectedProductIndices[2] = {-1, -1};

    if (numBooks < 3 || numProducts < 2) return 1;
    srand(time(NULL)); 

    for (i = 0; i < 3; i++) {
        do {
            randomIndex = rand() % numBooks;
        } while (isIndexSelected(selectedBookIndices, randomIndex));
        books[i] = getElement(bookstore->books, randomIndex);
        selectedBookIndices[i] = randomIndex;
    }

    for (i = 0; i < 2; i++) {
        do {
            randomIndex = rand() % numProducts;
        } while (isIndexSelected(selectedProductIndices, randomIndex));
        products[i] = getElement(bookstore->products, randomIndex);
        selectedProductIndices[i] = randomIndex;
    }

    for (i = 0; i < 2; i++) {
        quantities[i] = rand() % 5 + 1;
    }

    nameWidth = getMaxFileNameLength(books, products);

    printf("\n%-*s %-8s %-10s %-8s\n", nameWidth, "Name", "Price", "Quantity", "Subtotal");

    for (i = 0; i < 3; i++) {
        book = books[i];
        printf("%-*s $%-7.2f %-10d $%.2f\n", nameWidth, book->bookTitle, book->bookPrice, 1, book->bookPrice);
        total += book->bookPrice;
    }

    for (i = 0; i < 2; i++) {
        product = products[i];
        subtotal = product->productPriceInCents * quantities[i] / 100.0;
        printf("%-*s $%-7.2f %-10d $%.2f\n", nameWidth, product->productName, product->productPriceInCents / 100.0,
               quantities[i], subtotal);
        total += subtotal;
    }


    printf("\nTotal: $%.2f\n", total);
    return 0;
}


