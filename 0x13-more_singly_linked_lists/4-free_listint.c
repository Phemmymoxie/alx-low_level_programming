#include "lists.h"

/**
 * free_listint - function that frees linked list nodes
 * @head: the head pointer of the nodes
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!(head))
		return;

	while (head != NULL)
	{
	temp = head;
	head = head->next;
	free(temp);
	}

}
