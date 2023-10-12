#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the
 * node at index index of a dlistint_t linked list.
 * @head: the head node
 * @index: the position tomdelete
 * Return: 1 for success or -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp1;
	dlistint_t *tmp2;
	unsigned int x;

	tmp1 = *head;
	if (tmp1 != NULL)
		while (tmp1->prev != NULL)
			tmp1 = tmp1->prev;
	x = 0;
	while (tmp1 != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = tmp1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				tmp2->next = tmp1->next;

				if (tmp1->next != NULL)
					tmp1->next->prev = tmp2;
			}
			free(tmp1);
			return (1);
		}
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		x++;
	}
	return (-1);
}
