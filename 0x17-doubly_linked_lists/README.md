## lists.h
This header file contains the prototypes of the functions that are used in this double linked list project.
Includes the data structure dlistint_t that is used to create the linked list and also facilitate other operations like accessing the linked list

## 0-print_dlistint.c
This is a function that prints all the elements of a dlistint_t list.
used the 0-main.c file to test this function out.

## 1-dlistint_len.c
This is a function that returns the number of elements in alinked list in our case which is dlistint_t.
Tested this fuction with file 1-main.c

## 2-add_dnodeint.c
This function adds a new node at the beginning of dlistint_t list
Run this function after compiling it with 2-main.c

## 3-add_dnodeint_end.c
NOw this function addds a node at the end of list.
Compiled and run with 3-main.c

## 4-free_dlistint.c
function that frees a dlistint_t list.

## 5-get_dnodeint.c
This is a function that returns the nth code of dlistint_t where index is the index of the node starting from 0.
If node does not exist returns null

## 6-sum_dlistint.c
This is a function that returns the sum of all the data (n) of linked list dlistint_t.
if the list is empty the functions returns 0
Usede 6-main.c to test the function after successfull compilation

## 7-insert_dnodeint.c
a function that inserts a new node at a given position.

where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed   a function that inserts a new node at a given position.
Tested with 8-main.c
## 8-delete_dnodeint.c
 function that deletes the node at index index of a dlistint_t linked list.

where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed function that deletes the node at index index of a dlistint_t linked list.
tested with 7-main.c
