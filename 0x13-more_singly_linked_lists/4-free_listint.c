#include "lists.h"

/**
 * free_listint - function that frees linked list nodes
 * @head: the head pointer of the nodes
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{

	if (!(head))
		return;
	while (head != NULL)
	{
	free(head);
	head = head->next;
	}

	free(head);
}
