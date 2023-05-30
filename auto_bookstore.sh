#!/bin/bash

echo
echo "Step 1: Compile the program"
echo
make
echo 
echo  "Step 2: Search for string literals in .c source code"
echo 
grep -r '"[^"]*"' *.c
echo
echo Step 3: Execute program with option 1
echo
./bookworms books.txt products.txt <<< "1"
if [ $? -ne 0 ]; then
    echo "Error: Failed to execute the step 3."
fi
echo
echo "Step 4: Execute program with option 2"
echo
./bookworms books.txt products.txt <<< "2"
exit 0