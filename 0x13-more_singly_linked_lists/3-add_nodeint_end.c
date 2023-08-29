#include "lists.h"

/**
 * add_nodeint_end - function that  adds new  node at the end of  linked list
 * @head: pointer to the next node
 * @n: newnode data
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tmp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newnode;

	return (newnode);
}
