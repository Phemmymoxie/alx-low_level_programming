#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: the double pointer to the head node
 *
 * Return: the value of the next node
 */
int pop_listint(listint_t **head)
{
	listint_t *res;

	if (*head == NULL)
	{
		return (0);
	}

	res = *head;
	*head = res->next;
	free(res);
	res = NULL;

return ((*head)->n);
}
