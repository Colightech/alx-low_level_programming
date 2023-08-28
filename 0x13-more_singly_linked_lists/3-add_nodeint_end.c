#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 *  at the end of a listint_t list.
 *  @head: pointer to the next node
 *  @n: constant integer
 *  Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node =  malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* initialize the new node*/
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is initially empty, set the new node as the head */
	if (*head == NULL)
	{
		*head = new_node;
	}

	/* Traverse the list to find the last node */
	while (current->next)
	{
		current = current->next;
	}
	/* Update the next pointer of the last node to point to the new node */
	current->next = new_node;

	free(new_node);
	return (new_node);
}
