#include "lists.h"

/**
 * listint_len - function that calculates the length of nodes
 * @h: the pointer to the head node
 *
 * Return: the length
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;
	const listint_t *temp;

	temp = h;

	if (!(temp))
		return (0);

	while (temp != NULL)
	{
		cnt++;
		temp = temp->next;
	}
return (cnt);
}
