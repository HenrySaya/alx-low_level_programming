#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to initialize struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
