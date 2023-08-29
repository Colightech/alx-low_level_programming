#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
 * @head: pointer to the next node
 * @index: index of the node to return
 * Return: return nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (x == index)
		{
			return (current);
		}
		current = current->next;
		x++;
	}
	return (NULL);
}
