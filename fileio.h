#ifndef FILEIO_H
#define FILEIO_H
#include "linkedlist.h"

typedef struct {
    int bookID;
    char bookTitle[64];
    char bookAuthor[128];
    double bookPrice;
} Book;

typedef struct {
    char productCode[6];
    char productName[128];
    int productPriceInCents;
} Product;

typedef struct {
    LinkedList* books;
    LinkedList* products;
} Bookstore;

Bookstore* readBookstoreFromFile(const char* bookFilename, const char* productFilename);
void freeBookstore(Bookstore* bookstore);
void convertBookIDsToHex(Bookstore* bookstore);

#endif
