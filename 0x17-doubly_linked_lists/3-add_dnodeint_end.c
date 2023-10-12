#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at
 * the end of a dlistint_t list.
 * @head: the head node
 * @n: number
 * Return: pointer of element or null if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	temp = *head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	else
	{
		*head = newNode;
	}
	newNode->prev = temp;

	return (newNode);
	free(newNode);
}
