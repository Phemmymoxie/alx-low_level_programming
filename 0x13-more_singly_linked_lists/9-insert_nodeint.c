#include "lists.h"

/**
 * insert_nodeint_at_index - add node to a linked list at
 * index (idx)
 * @head: the head pointer of the linked list
 * @idx: the index position where the node is to be inserted
 * @n: the element of the new node
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;

	if (!(*head))
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!(new_node))
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (NULL);
	}

	idx--;
	while (idx != 0)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		idx--;
	}

	new_node->next = temp->next;
	temp->next = new_node;

return (new_node);
}
