#include "lists.h"

/**
 * get_nodeint_at_index - function that gets the node at index
 * @head; the head pointer
 * @index: the index of the node needed
 * Return: the node in that index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *res, *temp;
	
	if (!(head))
		return (NULL);
	
	temp = head;
	if (index == 0)
	{
		return (temp);
	}
	else
	{
		while (index != 0 && temp != NULL)
		{
			temp = temp->next;
			res = temp;
			index--;
		}
	}
	if (!res)
		return (NULL);

	else
		return (res);
}
