#include "lists.h"

/**
 * print_list -  function that prints all the elements of a list_t list.
 * @h: list head
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else 
		
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}
