#include "lists.h"

/**
 * print_dlistint - this function that prints all the
 * elements of a dlistint_t list.
 * @h: head node
 * Return: numbers of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr;
	int count = 0;

	for (curr = h; curr != NULL; curr = curr->next)
	{
		printf("%d\n", curr->n);
		count += 1;
	}
	return (count);
}
