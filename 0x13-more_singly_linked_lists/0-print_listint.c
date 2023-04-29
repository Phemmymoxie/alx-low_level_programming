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
	const listint_t *temp;

	temp = h;
	if (!(temp))
		return (0);

	while (temp != NULL)
	{
	printf("%d\n", temp->n);
	cnt++;
	temp = temp->next;
	}

return (cnt);
}
