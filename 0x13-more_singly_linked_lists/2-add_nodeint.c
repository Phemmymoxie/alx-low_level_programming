#include "lists.h"

/**
 * add_nodeint - a function thats add node to
 * the beginning of a linked list
 * @head: the double pointer to the head pointer
 * @n: the value of the node
 * Return: the pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;

	node->next = *head;
	*head = node;

	return (*head);
}
