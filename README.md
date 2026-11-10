# Bookworms Catalogue and Transaction Simulator

- **Unit**: Unix and C Programming (`COMP1000` / `UCP1000`)
- **Study Period**: 2023 Trimester 1A
- **Degree Programme**: Bachelor of Information Technology — Awarded with Distinction by Curtin University
- **Overall Unit Mark**: 90 (High Distinction)

> **README for Assignment Submission**: [README for Assignment Submission](ORIGINAL_README.md)

A modular C program that loads book and product catalogues into linked lists, generates a random purchase receipt and exports compact book identifiers in hexadecimal form.

<table>
  <thead>
    <tr>
      <th colspan="6">Curtin University &bull; Bachelor of Information Technology (Awarded with Distinction &bull; CWA 82.19)</th>
    </tr>
  </thead>
  <tbody>
    <tr align="center" style="font-weight: bold; background-color: #f6f8fa;">
      <td>2022 T3A</td>
      <td>2023 T1A</td>
      <td>2023 T2A</td>
      <td>2023 T3A</td>
      <td>2024 T1A</td>
      <td>2024 T2A</td>
    </tr>
    <tr>
      <td valign="top">
        <abbr title="Fundamentals of Programming (92 HD)"><b>COMP1005</b></abbr><br>
        &bull; <a href="https://github.com/honneground/COMP1005-Vampire-Ecosystem-Simulation">Vampire Eco</a><br>        &bull; <a href="https://github.com/honneground/COMP1005-Vehicle-Emissions-Analyzer">Emissions</a><br>        <abbr title="Computer Systems (83 HD)"><font color="#8c959f">COMP2000</font></abbr><br>
        <abbr title="Linear Algebra and Statistics for Engineers (71 D)"><font color="#8c959f">MATH1015</font></abbr><br>
        <abbr title="Fundamental Concepts of Data Security (73 D)"><font color="#8c959f">ISEC2001</font></abbr>
      </td>
      <td valign="top" style="background-color: #f1f8ff; border: 2px solid #0969da;">
        <abbr title="Data Structures and Algorithms (89 HD)"><b>COMP1002</b></abbr><br>
        &bull; <a href="https://github.com/honneground/COMP1002-StudyHelp-Academic-Network">StudyHelp</a><br>        &bull; <a href="https://github.com/honneground/COMP1002-Advanced-Data-Structures-and-Visualizer">Visualizer</a><br>        <abbr title="Unix and C Programming (90 HD)"><b>COMP1000</b></abbr><br>
        &bull; <a href="https://github.com/honneground/COMP1000-Terminal-Maze-Survival-Game">Maze Survival</a><br>        &bull; <a href="https://github.com/honneground/COMP1000-Terminal-Maze-Darkness-Game">Maze Darkness</a><br>        &bull; <b>&#128073; Bookstore</b><br>        <abbr title="Introduction to Software Engineering (95 HD)"><b>ISAD1000</b></abbr><br>
        &bull; <a href="https://github.com/honneground/ISAD1000-Software-Testing-and-Pocket-Beast-Game">Pocket Beast</a><br>        <abbr title="Integrating Indigenous Science and STEM (73 D)"><font color="#8c959f">NPSC1003</font></abbr>
      </td>
      <td valign="top">
        <abbr title="Unix Systems Programming (88 HD)"><b>COMP2002</b></abbr><br>
        &bull; <a href="https://github.com/honneground/COMP2002-Parallel-Directory-File-Calculator">Dir Calculator</a><br>        <abbr title="Operating Systems (80 HD)"><b>COMP2006</b></abbr><br>
        &bull; <a href="https://github.com/honneground/COMP2006-Customer-Queue-Concurrency-Simulation">Queue Sim</a><br>        <abbr title="Computer Communications (75 D)"><font color="#8c959f">CNCO2000</font></abbr><br>
        <abbr title="Mobile Cloud Computing (79 D)"><font color="#8c959f">CNCO3003</font></abbr>
      </td>
      <td valign="top">
        <abbr title="Database Systems (80 HD)"><b>ISYS2014</b></abbr><br>
        &bull; <a href="https://github.com/honneground/ISYS2014-Relational-Database-Management-System">FootyStats DB</a><br>        <abbr title="Quantitative Techniques for Business (87 HD)"><b>ECOM2001</b></abbr><br>
        &bull; <a href="https://github.com/honneground/ECOM2001-Econometric-Statistical-Analysis-R">Econometric R</a><br>        <abbr title="Managing Social Media Platforms (69 C)"><font color="#8c959f">MKTG2006</font></abbr><br>
        <abbr title="Computing Topics (61 C)"><font color="#8c959f">COMP2005</font></abbr>
      </td>
      <td valign="top">
        <abbr title="Financial Decision Making (93 HD)"><b>ACCT1002</b></abbr><br>
        &bull; <a href="https://github.com/honneground/ACCT1002-Financial-Decision-Calculators">Finance Tools</a><br>        <abbr title="Human Computer Interface (71 D)"><b>ICTE3002</b></abbr><br>
        &bull; <a href="https://github.com/honneground/ICTE3002-Lumen-Interaction-Design">Lumen UI</a><br>        <abbr title="Engineering Management and Professional Practice (79 D)"><b>MGMT3000</b></abbr><br>
        &bull; <a href="https://github.com/honneground/MGMT3000-Phone-Router-Repurposing-Design">Phone Router</a><br>        <abbr title="Distributed Networks (83 HD)"><font color="#8c959f">CNCO3000</font></abbr>
      </td>
      <td valign="top">
        <abbr title="Capstone Computing Project 1 (94 HD)"><b>ISAD3000</b></abbr><br>
        &bull; <a href="https://github.com/honneground/ISAD3000-CurtinSG-App-Design">CurtinSG UI</a><br>        <abbr title="Capstone Computing Project 2 (95 HD)"><b>ISAD3001</b></abbr><br>
        &bull; <a href="https://github.com/honneground/ISAD3001-CurtinSG-Student-App">CurtinSG App</a><br>        <abbr title="Advanced Computer Communications (88 HD)"><b>CNCO3002</b></abbr><br>
        &bull; <a href="https://github.com/honneground/CNCO3002-Multi-Service-Socket-Server">Socket Server</a><br>        <abbr title="Accounting - The Fundamentals of Business (93 HD)"><font color="#8c959f">ACCT2013</font></abbr>
      </td>
    </tr>
  </tbody>
</table>


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

---

## Portfolio note

This Git repository was created retrospectively from the original project code, with assistance from OpenAI Codex and Antigravity in curating the repository and writing this README for publication. The initial commit timestamp is backdated to the original coursework submission date, followed by the final release commit.

