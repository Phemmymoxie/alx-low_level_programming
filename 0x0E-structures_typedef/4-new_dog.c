#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog- function that creats a new struct
 * @name: the name member of the new struct
 * @age: the age member of the new struct
 * @owner: the owner member of the new struct
 * Return: the pointer to the newly created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int n_len = strlen(name) - 1;
	int o_len = strlen(owner) - 1, cnt;

	new_d = (dog_t *)malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	new_d->name = malloc(n_len * sizeof(new_d->name));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	for (cnt = 0; cnt <= n_len; cnt++)
	{
		new_d->name[cnt] = name[cnt];
	}

	new_d->age = age;

	new_d->owner = malloc(o_len * sizeof(new_d->owner));
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	for (cnt = 0; cnt <= o_len; cnt++)
	{
		new_d->owner[cnt] = owner[cnt];
	}

	return (new_d);
}
