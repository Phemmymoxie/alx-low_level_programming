#include "lists.h"

/**
 * loop_num_2 - function that check for cycle in a linked
 * list and return the number of nodes visited
 * @head: the pointer to the head node
 *
 * Return: the number of the visited nodes
 */
size_t loop_num_2(listint_t *head)
{
	listint_t *snl, *hor, *temp;
	size_t cnt;


	if (head == NULL || head->next == NULL)
		return (0);

	snl = head;
	hor = head;

	while (hor != NULL)
	{
		snl = snl->next;
		hor = hor->next->next;

		if (snl == hor)
		{
			cnt = 1;
			temp = hor->next;
			while (temp != snl)
			{
				temp = temp->next;
				cnt++;
			}

			return (cnt);
		}

	}

	return (0);
}

/**
 * free_listint_safe - function thats frees linked list
 * @head: the head pointer of the linked list
 *
 * Return: the total number of nodes free'd
 */
size_t free_listint_safe(listint_t **head)
{
	size_t cnt2, num;
	listint_t *res;

	if (head == NULL)
	{
		return (0);
	}

	num = loop_num_2(*head);
	res = *head;

	if (num == 0)
	{
		for (cnt2 = 0; *head != NULL; cnt2++)
		{
			res = *head;
			*head = (*head)->next;
			free(res);
		}

	}
	else
	{
		for (cnt2 = 0; cnt2 < num + 2 && *head != NULL; cnt2++)
		{
			res = *head;
			*head = (*head)->next;
			free(res);
		}
		*head = NULL;

	}
	res = NULL;

return (cnt2);
}
