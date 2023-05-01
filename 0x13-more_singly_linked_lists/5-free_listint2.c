#include "lists.h"

/**
 * free_listint2 - function that frees a double pointer
 * @head: the double pointer to be freed
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *res;


	if (!(*head))
		return;

	while (*head != NULL)
	{
		res = *head;
		*head = (*head)->next;
		free(res);
	}
	head = NULL;
}
