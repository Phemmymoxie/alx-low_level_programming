#include "lists.h"


/**
 * find_listint_loop - function that finds a loop in a linked list
 * @head: the head pointer of the list
 *
 * Return: the pointer where the loop is found
 * or NULL if there is no loop in the linked list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *res, *temp;

	if (!(head))
		return (NULL);

	res = head;
	temp = head;

	while (temp)
	{
		res = res->next;
		temp = temp->next->next;

		if (res == temp)
		{
			res = head;
			while (res != temp)
			{
				res = res->next;
				temp = temp->next;
			}

			res = res->next;
			while (res != temp)
			{
				res = res->next;
			}

			return (res);
		}

	}

return (NULL);
}
