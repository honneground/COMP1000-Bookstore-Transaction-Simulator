# Bookworms Catalogue and Transaction Simulator

- **Unit**: Unix and C Programming (`COMP1000` / `UCP1000`)
- **Study Period**: 2023 Trimester 1A
- **Degree Programme**: Bachelor of Information Technology — Awarded with Distinction by Curtin University
- **Overall Unit Mark**: 90 (High Distinction)

> **README for Assignment Submission**: [README for Assignment Submission](ORIGINAL_README.md)

A modular C program that loads book and product catalogues into linked lists, generates a random purchase receipt and exports compact book identifiers in hexadecimal form.

## Assignment context and constraints

The final assessment asked for a working `bookworms` application with suitable book, product and bookstore structures, dynamic allocation, linked-list storage and file loading. The program had to accept two input filenames, offer menu choices for a random purchase and a compact ID export, report missing inputs or unreadable files, and release allocated memory.

The purchase task specified three books and two other products. Each book has quantity one; each selected product has a random quantity from one to five. The receipt must show prices, quantities, subtotals and the overall total. A separate task represented book IDs using four bits per ID and hexadecimal file output.

A working Makefile and a Bash script were also required. The script had to compile the program, show C source lines containing string literals, and run both menu choices. The supplied Makefile builds with `-Wall -pedantic -ansi`.

## Implementation

| Component | Responsibility |
|---|---|
| `main.c` | Validate the argument count, load the catalogues, select an operation and free the bookstore |
| `fileio.h`, `fileio.c` | Book/product structures, catalogue parsing, cleanup and hexadecimal ID output |
| `linkedlist.h`, `linkedlist.c` | Generic linked-list storage and indexed access |
| `randomPurchase.h`, `randomPurchase.c` | Select distinct books/products and print a formatted receipt |
| `auto_bookstore.sh` | Build, search source strings and execute both menu choices |

Book records contain an integer ID, title, author and price. Product records contain a five-character code, name and price stored as integer cents. The random purchase uses the current time as its random seed. The export operation writes pairs of four-bit IDs to `book_ids.txt` using bit fields and bitwise operations.

## Input files

The included `books.txt` and `products.txt` demonstrate the two formats:

```text
<integer ID> <book title> | <author> | $<price>
<product code> - <product name> - $<price>
```

To generate a receipt, the catalogues must contain at least three books and two products.

## Build and run

Use GCC, Make and Bash in a Linux or similar Unix environment.

```bash
make
./bookworms books.txt products.txt
```

Choose `1` to generate a receipt or `2` to write `book_ids.txt`. The command-line order in this implementation is **books file first, products file second**.

Run the assignment's scripted workflow:

```bash
bash auto_bookstore.sh
```

It compiles, prints source lines containing string literals, then supplies choices `1` and `2` in separate runs.

For an optional memory check with Valgrind installed:

```bash
valgrind --leak-check=full ./bookworms books.txt products.txt
```

Remove compiled objects and the executable with `make clean`.
