#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 *node of a dlistint_t linked list.
 * @head: the head node
 * @index: the index to return
 * Return: node or Null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *curr;

	size = 0;
	if (head == NULL)
		return (NULL);

	curr = head;
	while (curr)
	{
		if (index == size)
			return (curr);
		size++;
		curr = curr->next;
	}
	return (NULL);
}
