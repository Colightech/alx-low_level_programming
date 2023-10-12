#include "lists.h"

/**
 * free_dlistint - this function that frees a dlistint_t list.
 * @head: the head node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
