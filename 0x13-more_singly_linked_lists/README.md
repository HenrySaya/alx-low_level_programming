## 0x13.C - More singly linked lists
In this particular project I dive deeper into more projects that involve working with single linked llist data structure.
This repository includes a number of files that are compled and tested accuractely with my functions to achieve specific activities as I will document fully.
The test files are allin the separate foder name tests.

## Lists.h
This is the headr file that contains all the prototypes used with our functions and shared with the test files.
It also contains the single linked list function prototype or rather a self referential structure to be used in all our files instead of writing it in every singlefile I put it in the header file so as to avoid errors aand repetition.

##0-print_listint.c
This is a function is used to print the single linked list in this particular event I used the listint_t list that was created.
It also returns the number of nodes in listint_t

## 1-listint_len.c
This is a function that returns the number of elements in a linked listint_t list

## 2-add_nodeint.c
IN this function we handle adding a new node at the beginning of a listint_t list.

## 3-add_nodeint_end.c
This is a functions thet adds a new node at the ened of a listint_t list

## 4-free_listint.c
This is a function that frees a listint_t list

## 5-free_listint2.c
This is a function that does sa ework as the one above only that it sets the head to NULL.

## 6-pop_listint.c
This is a function that deletes the head node of a listint_t and also returns the node's data
