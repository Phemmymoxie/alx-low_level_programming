#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that set a struct variable
 * @d: the pointer to the struct
 * @name: the pointer to the name member of the struct
 * @age: the age member of the struct
 * @owner: the pointer to the owner member of the struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
