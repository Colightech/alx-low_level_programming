#include "lists.h"

/**
 * insert_dnodeint_at_index - this function that
 * inserts a new node at a given position.
 * @h: head node
 * @idx: position to insert
 * @n: value to insert
 * Return: pointer of the new node or null
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *tmp;
	unsigned int x;

	newNode = NULL;
	if (idx == 0)
		newNode = add_dnodeint(h, n);
	{
		tmp = *h;
		x = 1;
		if (tmp != NULL)
			while (tmp->prev != NULL)
				tmp = tmp->prev;
		while (tmp != NULL)
		{
			if (x == idx)
			{
				if (tmp->next == NULL)
					newNode = add_dnodeint_end(h, n);
				else
				{
					newNode = malloc(sizeof(dlistint_t));
					if (newNode != NULL)
					{
						newNode->n = n;
						newNode->next = tmp->next;
						newNode->prev = tmp;
						tmp->next->prev = newNode;
						tmp->next = newNode;
					}
				}
				break;
			}
			tmp = tmp->next;
			x++;
		}
	}
	return (newNode);
}
