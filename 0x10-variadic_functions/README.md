## 0x10. C - Variadic functions

This repository contains a set of C programs that demonstrate the use of variadic functions.

## Project 0: Sum Them All

### File: 0-sum_them_all.c

- **Prototype:** `int sum_them_all(const unsigned int n, ...)`
- **Description:** This function returns the sum of all its parameters. If `n == 0`, it returns 0.

## Project 1: Print Numbers

### File: 1-print_numbers.c

- **Prototype:** `void print_numbers(const char *separator, const unsigned int n, ...)`
- **Description:** This function prints numbers followed by a new line. It takes a separator string to be printed between the numbers. The `n` parameter is the number of integers passed to the function. If `separator` is `NULL`, it won't print it. It always prints a new line at the end.

## Project 2: Print Strings

### File: 2-print_strings.c

- **Prototype:** `void print_strings(const char *separator, const unsigned int n, ...)`
- **Description:** This function prints strings followed by a new line. It takes a separator string to be printed between the strings. The `n` parameter is the number of strings passed to the function. If `separator` is `NULL`, it won't print it. If one of the strings is `NULL`, it prints `(nil)` instead. It always prints a new line at the end.

## Project 3: Print Anything

### File: 3-print_all.c

- **Prototype:** `void print_all(const char * const format, ...)`
- **Description:** This function prints anything based on the provided format. It accepts a list of types of arguments. The format characters are:
  - `c`: char
  - `i`: integer
  - `f`: float
  - `s`: char * (if the string is `NULL`, it prints `(nil)` instead)
  - Any other character is ignored.  
  It doesn't use `for`, `goto`, ternary operator, `else`, or `do ... while`. It can use a maximum of 2 while loops and 2 if statements. It can declare a maximum of 9 variables. It is allowed to use `printf`. It always prints a new line at the end.

## Header File: variadic_functions.h

- Contains prototypes of all functions and the prototype of the function `_putchar`.

## Note

Each project has its own respective source file (`.c` file) where the functions are implemented.

## Author

Your Name - [Your GitHub Profile](https://github.com/yourusername)

