#include "lists.h"

/**
 * print_listint - function that print all nodes of a list
 * @h: the pointer to the head node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	if (!(h))
		return (0);

	while (h != NULL)
	{
	printf("%d\n", h->n);
	cnt++;
	h = h->next;
	}

return (cnt);
}
