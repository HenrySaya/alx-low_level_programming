 - Structures and typedef
This project involves working with structures and typedef in the C programming language. Below are the descriptions of the projects and their respective functions:

1) dog.h
This header file defines a new type struct dog with the following elements:

name (type: char *)
age (type: float)
owner (type: char *)

2) 1-init_dog.c
Function: void init_dog(struct dog *d, char *name, float age, char *owner)
This function initializes a variable of type struct dog with the provided values for name, age, and owner.

3) 2-print_dog.c
Function: void print_dog(struct dog *d)
This function prints the details of a struct dog. It takes a pointer to a struct dog as an argument and prints the name, age, and owner of the dog. If any element of d is NULL, it prints (nil) instead.

4) dog.h (Again)
This header file defines a new type dog_t as an alias for the type struct dog.

5) 4-new_dog.c
Function: dog_t *new_dog(char *name, float age, char *owner)
This function creates a new dog with the provided name, age, and owner. It allocates memory for the new dog, stores copies of name and owner, and returns a pointer to the newly created struct dog. If the function fails to allocate memory, it returns NULL.

6) 5-free_dog.c
Function: void free_dog(dog_t *d)
This function frees the memory allocated for a struct dog. It takes a pointer to a struct dog as an argument and releases the memory associated with it.

These projects focus on utilizing structures, typedef, memory allocation, and basic functions to work with dog-related data. Each function has a specific purpose and contributes to the overall functionality of managing dog information.

Please note that proper memory management is crucial, especially when dealing with dynamic allocation in projects like 4-new_dog.c and 5-free_dog.c. It's important to free allocated memory to prevent memory leaks.
