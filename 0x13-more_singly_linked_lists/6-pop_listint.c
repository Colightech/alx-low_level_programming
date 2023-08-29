#include "lists.h"

/**
 * pop_listint - function deletes the head node of a linked list
 * @head: pointer to the next node
 * Return: returns the head node’s data (n).
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *store;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	store = (*head)->next;
	free(*head);
	*head = store;

	return (x);
}
