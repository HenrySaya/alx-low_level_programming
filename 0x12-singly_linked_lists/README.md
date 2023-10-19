## 0x12. C - Singly linked lists
In this project I take you through single linked lits in C in the following projects.

## _putchar.c
This file contains the putchar function as we are going to use it more than the printf function.

## lists.h
This file contains the different prototypes that are usd across different test files.

## Test
This folder contains all the test files used to compile each and every file we created in this project

## 0-print_list.c
This file is of a function that prints all the elements of a list_t list.
list_t is the data structure I employed to create the single linked list.
This file was tested against the 0-main.c file after compilation and in this function we used the printf

## 1-list_len.c
This file contains a function that returns the number of elements in a linked list_t list
Tested and compiled with 1-main.c file that is in the test folder.

## 2-add_node.c
This file includes a function that adds a new node at the beginning of a list_t list and returns  the address of the new element, or NULL if it failed.
We used the strdup which will allocate memory for the string and duplicates the string.After which it returns a pointer to the new copy of the strings

## 3-add_node_end.c
This is a file that holds a function that adds a new node at the end of the list_t
