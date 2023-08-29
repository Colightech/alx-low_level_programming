#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 * @head: pointer to the next node
 * @idx: index position for the new node
 * @n: data item for the new node
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *newnode;
	listint_t *current = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (x = 0; current && x < idx; x++)
	{
		if (x == idx - 1)
		{
			newnode->next = current->next;
			current->next = newnode;
			return (newnode);
		}
		else
			current = current->next;
	}

	return (NULL);
}
