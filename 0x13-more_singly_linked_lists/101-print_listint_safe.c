#include "lists.h"

/**
 * loop_num - function that check for cycle in a linked
 * list and return the number of nodes visited
 * @head: the pointer to the head node
 *
 * Return: the number of the visited nodes
 */
size_t loop_num(const listint_t *head)
{
	const listint_t *snl, *hor, *temp;
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
 * print_listint_safe - a function that prints a safe version
 * of a linked list
 * @head: the head pointer of the linked list
 *
 * Return: the total number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t cnt2, num;
	const listint_t *res;

	if (head == NULL)
	{
		return (0);
		exit(98);
	}

	num = loop_num(head);
	res = head;

	if (num == 0)
	{
		for (cnt2 = 0; res != NULL; res = res->next)
		{
			printf("[%p] %d\n", (void *)res, res->n);
			cnt2++;
		}
	}
	else
	{
		for (cnt2 = 0; cnt2 < num + 2; cnt2++)
		{
			printf("[%p] %d\n", (void *)res, res->n);
			res = res->next;
		}

		printf("-> [%p] %d\n", (void *)res, res->n);
	}

return (cnt2);
}
