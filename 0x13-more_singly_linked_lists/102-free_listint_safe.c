#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 * @h: pointer to te first node
 * Return:  the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t saf = 0;
	int store;
	listint_t *current;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		store = *h - (*h)->next;
		if (store > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			saf++;
		}
		else
		{
			free(*h);
			*h = NULL;
			saf++;
			break;
		}
	}

	*h = NULL;

	return (saf);
}
