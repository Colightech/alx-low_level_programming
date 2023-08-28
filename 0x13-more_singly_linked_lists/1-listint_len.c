#include "lists.h"

/**
 * listint_len -  function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to the next node
 * Return: return number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t x, count = 0;

	if (h == NULL)
		return (0);
	for (x = 0; h != NULL; x++)
	{
		count++;
		h = h->next;
	}
	return (count);
}
