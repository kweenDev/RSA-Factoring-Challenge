#!/bin/bash

# Compile factors.c
gcc -Wall -Werror -pedantic -Wextra factors.c -o factors

# Run the compiled program
while read -r line || [[ -n "$line" ]]; do
    ./factors "$line"
done < "tests/test00"
