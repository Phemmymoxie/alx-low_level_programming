#include "lists.h"

/**
 * sum_listint - function that sum up all elements
 * of a linked list
 * @head: the head pointer of the linked list
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	listint_t *res;
	int sum = 0;

	if (!head)
		return (0);

	res = head;
	while (res != NULL)
	{
		sum += res->n;
		res = res->next;
	}
return (sum);
}
