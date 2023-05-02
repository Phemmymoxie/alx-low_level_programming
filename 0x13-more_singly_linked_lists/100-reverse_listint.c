#include "lists.h"

/**
 * reverse_listint - function that reverse a linked list
 * @head: the head pointer of the linked list
 *
 * Return: the pointer to the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *res2;

	if (!(*head))
		return (NULL);

	temp1 = NULL;
	res2 = NULL;

	while (*head != NULL)
	{
		res2 = (*head)->next;
		(*head)->next = temp1;
		temp1 = *head;
		*head = res2;
	}

	*head = temp1;

return (*head);
}
