# RSA Factoring Challenge Project

## Overview

Welcome to the RSA Factoring Challenge project! This project involves developing programs to factorize numbers, particularly in the context of the RSA algorithm. The tasks include factorizing arbitrary numbers and finding two prime numbers for a given RSA number.

## Table of Contents

1. [Introduction](#introduction)
2. [Files](#files)
3. [Usage](#usage)
4. [Compilation](#compilation)
5. [Examples](#examples)
6. [RSA Factoring Explanation](#rsa-factoring-explanation)

## Introduction

As a software engineering student, I've created this project to showcase my understanding of RSA factoring. The project includes C programs (`factors.c` and `rsa.c`) and corresponding Python scripts (`factors.py` and `rsa.py`) for factorizing numbers.

## Files

- `factors.c`: C program to factorize arbitrary numbers into two smaller numbers.
- `rsa.c`: C program to factorize RSA numbers into two prime numbers.
- `factors.py`: Python script mirroring the logic of `factors.c`.
- `rsa.py`: Python script mirroring the logic of `rsa.c`.
- `factors.sh`: Shell script to compile and run `factors.c`.
- `rsa.sh`: Shell script to compile and run `rsa.c`.
- `tests/`: Directory containing test files.

## Usage

- The C programs (`factors.c` and `rsa.c`) read numbers from a file and factorize them.
- The Python scripts (`factors.py` and `rsa.py`) provide equivalent functionality using Python.
- Shell scripts (`factors.sh` and `rsa.sh`) automate compilation and execution.

## Compilation

Compile the C programs using the provided shell scripts:

```bash
./factors.sh
./rsa.sh
```

- examples:
Example usage of the C programs:
```bash
./factors tests/test00
./rsa tests/rsa-1
```

example usage of the Python scripts:
```bash
./factors.py tests/test00
./rsa.py tests/rsa-1
```

## RSA Factoring Explanation:
RSA Factoring is a crucial aspect of the RSA (Rivest-Shamir-Adleman) algorithm, a widely used public-key cryptosystem. The security of RSA relies on the difficulty of factoring the product of two large prime numbers.
1. **Generating RSA Keys:**
-  In RSA, a user generates a public key and a private key. The public key consists of the product of two large prime numbers, while the private key involves the knowledge of the prime factors.

2. **Encryption and Decryption:**
- The public key is used to encrypt messages, and only the possessor of the private key can decrypt them. The security hinges on the complexity of factoring the large composite number back into its prime factors.

3. **RSA Factoring Challenge:**
- The RSA Factoring Challenge involves factorizing numbers, simulating the process of attacking the RSA algorithm. The goal is to find the two prime factors of a given composite number.


This project has been completed as part of the ALX SE curriculum, by Refiloe Radebe.
