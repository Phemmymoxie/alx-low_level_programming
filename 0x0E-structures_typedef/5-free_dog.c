#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a funtion that frees a d element
 * @d: the pointer to the memory to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);

}
