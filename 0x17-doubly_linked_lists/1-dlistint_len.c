#include "lists.h"

/**
 * dlistint_len - function that returns the number
 *of elements in a linked dlistint_t list.
 * @h: head node
 * Return: number of element in dlists
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr;
	int count = 0;

	for (curr = h; curr != NULL; curr = curr->next)
	{
		count += 1;
	}
	return (count);
}
