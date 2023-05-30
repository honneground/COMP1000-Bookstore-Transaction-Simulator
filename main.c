#include <stdio.h>
#include "fileio.h"
#include "randomPurchase.h"

int main(int argc, char **argv) {
    const char *fileName1;
    const char *fileName2;
    Bookstore* bookstore;
    int option = 0;
    int result;
    if (argc != 3) {
        printf("Usage: program_name file1 file2\n");
        return 1; 
    }
    fileName1 = argv[1];
    fileName2 = argv[2];
    bookstore = readBookstoreFromFile(fileName1, fileName2);

    if (bookstore == NULL){
        printf("File not found or file format incorrect.\n");
        return 1;
    }

    while (option != 1 && option != 2) {
        printf("1. Generate random purchases\n");
        printf("2. Convert book IDs to hex\n");
        printf("Please select an option:");
        scanf("%d", &option);
        if (option == 1) { 
            result = generateRandomPurchases(bookstore);
            if (result == 1) printf("\nError: There are not enough items in the store to perform random testing purchases.\n       A minimum of 3 books and 2 products is required to run the test.\n");
        } else if (option == 2) {
            convertBookIDsToHex(bookstore);
        } else {
            printf("Invalid option selected.\n");
        }
    }

    freeBookstore(bookstore);
    return 0; 
}
