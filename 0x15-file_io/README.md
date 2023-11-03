# 0x15-file_io

This repository contains C programs that perform various file I/O operations.

## Files

### 0-read_textfile.c

A function that reads a text file and prints it to the POSIX standard output.

Prototype:
ssize_t read_textfile(const char *filename, size_t letters);
filename: The name of the file to read from.
letters: The number of letters to read and print.
Returns the actual number of letters it could read and print. Returns 0 in case of errors.

## 1-create_file.c
A function that creates a file.

## Prototype:
int create_file(const char *filename, char *text_content);
filename: The name of the file to create.
text_content: A NULL terminated string to write to the file.
Returns 1 on success, -1 on failure.
The created file must have permissions rw-------. If the file already exists, it will be truncated.

## 2-append_text_to_file.c
A function that appends text at the end of a file.

Prototype:
int append_text_to_file(const char *filename, char *text_content);
filename: The name of the file.
text_content: The NULL terminated string to add at the end of the file.
Returns 1 on success, -1 on failure.

## 3-cp.c
A program that copies the content of a file to another file.

Usage:

cp file_from file_to
file_from: The source file.
file_to: The destination file.
If the number of arguments is incorrect, it exits with code 97 and prints Usage: cp file_from file_to.
If file_to already exists, it will be truncated.
If file_from does not exist or cannot be read, it exits with code 98 and prints Error: Can't read from file NAME_OF_THE_FILE.
If it cannot create or write to file_to, it exits with code 99 and prints Error: Can't write to NAME_OF_THE_FILE.
If it cannot close a file descriptor, it exits with code 100 and prints Error: Can't close fd FD_VALUE.
Permissions of the created file: rw-rw-r--. If the file already exists, permissions are not changed.

## main.h
Contains all function prototypes.
