#include "lists.h"

/**
 * free_list - function that frees a list of nodes
 * @head: the pointer to the head node
 * Return: void.
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}

}
