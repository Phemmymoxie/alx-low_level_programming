#include "lists.h"

/**
 * add_nodeint_end - a function that add a new node
 * to the end of a linked list.
 * @head: the double pointer to the head of the node
 * @n: the constant value of the new node.
 *
 * Return: the updated head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	temp  = *head;
	node->next = NULL;

	if (temp == NULL)
	{
		*head = node;
	}

	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = node;
	}
	return (*head);
}

