#include "lists.h"
#include <stdlib.h>

/**
 * list_len - a function thats returns the number of
 * elements in a linked list
 * @h: the pointer to the headnode of the linked list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
return (cnt);
}

