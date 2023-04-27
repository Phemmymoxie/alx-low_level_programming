#include "lists.h"
#include <string.h>

/**
 * add_node - a function that add node to a linked list
 * @head: a double pointer to the head of the list
 * @str: the pointer to a string
 *
 * Return: return address of the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int cnt = 0;

	temp = malloc(sizeof(list_t));

	if (!(temp))
		return (NULL);

	temp->str = strdup(str);

	while (str[cnt])
		cnt++;

	temp->len = cnt;
	temp->next = *head;
	*head = temp;

return (*head);
}
