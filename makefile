CC = gcc
OBJ = main.o fileio.o linkedlist.o randomPurchase.o
EXEC = bookworms
CFLAGS = -Wall -pedantic -ansi

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

main.o: main.c fileio.h
	$(CC) $(CFLAGS) -c main.c

fileio.o: fileio.c
	$(CC) $(CFLAGS) -c fileio.c

linkedlist.o: linkedlist.c
	$(CC) $(CFLAGS) -c linkedlist.c

randomPurchase.o: randomPurchase.c
	$(CC) $(CFLAGS) -c randomPurchase.c

clean:
	rm -f $(OBJ) $(EXEC)