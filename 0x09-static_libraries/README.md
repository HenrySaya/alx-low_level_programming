## Project 0x09: C - Static Libraries
This project introduces the concept of static libraries in C. It includes the following essential files:

## libmy.a
## main.h
## create_static_lib.sh

# Description
The main.h file contains the following function prototypes:
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

## Library Contents
The libmy.a library is created from the following source files:
0-isupper.c
0-memset.c
0-strcat.c
100-atoi.c
1-isdigit.c
1-memcpy.c
1-strncat.c
2-strchr.c
2-strlen.c
2-strncpy.c
3-islower.c
3-puts.c
3-strcmp.c
3-strspn.c
4-isalpha.c
4-strpbrk.c
5-strstr.c
6-abs.c
9-strcpy.c
_putchar.c
## Usage
To compile and use the static library libmy.a, follow these steps:

#1 Clone the repository.
Compile the static library using the provided script:
./create_static_lib.sh
Use the library in your C programs by including the main.h header file and linking with libmy.a.
gcc your_file.c -L. -lmy -o your_program
## Testing
A main.c file is provided to help you test the static library. To get started, follow these steps:

Create a main.c file in the same directory as the libmy.a and main.h files.

Compile main.c with the static library:
gcc main.c -L. -lmy -o my_program
Execute the program:
./my_program
