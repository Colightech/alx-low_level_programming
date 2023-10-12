#include "lists.h"

/**
 * add_dnodeint - this function that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: head node
 * @n: number of node added
 * Return: pointer to d new node or Null if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
		{
			temp = temp->prev;
		}
	}
	newNode->next = temp;

	if (temp != NULL)
		temp->prev = newNode;
	*head = newNode;

	return (newNode);
	free(newNode);
}
