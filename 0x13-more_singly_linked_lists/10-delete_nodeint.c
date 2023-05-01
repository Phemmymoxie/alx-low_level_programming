#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node
 * at a given index.
 * @head: the double pointer to the head node.
 * @index: the given index position.
 * Return: (1) at success or (-1) if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *res;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		temp = NULL;
		return (1);
	}

	temp = *head;
	index--;
	while (index != 0)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
		index--;
	}
	res = temp->next;
	temp->next = res->next;
	free(res);
	res = NULL;

return (1);
}

