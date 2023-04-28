#include "lists.h"
#include <string.h>

/**
 * add_node_end - a function thats add to the
 * end list of a linked list
 * @head: the double pointer to the head pointer
 * @str: the pointer to the string to be in the new node
 * Return: the head pointer.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_n;
	unsigned int cnt = 0;

	new_n = malloc(sizeof(list_t));

	if (!(new_n))
		return (NULL);

	new_n->str = strdup(str);

	while (str[cnt])
		cnt++;

	new_n->len = cnt;
	new_n->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_n;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_n;

	}

return (*head);
}
