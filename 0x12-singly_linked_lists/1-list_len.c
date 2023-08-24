#include "lists.h"

/**
 * list_len - a function that returns number of elements in
 * linked list_t list.
 * @h: list_t pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
