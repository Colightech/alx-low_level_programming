#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the next node
 *
 * Return:  returns the head node’s data (n) or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int x;

	if (head == NULL || *head == NULL)
		return (0);

	x = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (x);
}

