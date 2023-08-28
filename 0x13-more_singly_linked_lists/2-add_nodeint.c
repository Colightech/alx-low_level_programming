#include "lists.h"

/**
 * *add_nodeint - function that adds a new node at the
 *  beginning of a listint_t list.
 *  @head: double pointer
 *  @n: constant integer
 *  Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* initailize the new node*/
	new_node->n = n;
	new_node->next = *head;

	/* update head to point to the new node*/
	*head = new_node;

	return (new_node);
}
