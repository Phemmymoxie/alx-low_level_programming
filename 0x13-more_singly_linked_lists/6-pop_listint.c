#include "lists.h"

/**
 * pop_listint - function that deletes the hea node of a list
 * @head: the double pointer to the head node
 *
 * Return: the value of the next node
 */
int pop_listint(listint_t **head)
{
	listint_t *res;
	unsigned int ret;

	if (*head == NULL)
	{
		return (0);
	}
	ret = (*head)->n;
	res = *head;
	*head = res->next;
	free(res);
	res = NULL;

return (ret);
}
