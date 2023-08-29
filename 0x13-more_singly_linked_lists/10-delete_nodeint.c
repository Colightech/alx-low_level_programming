#include "lists.h"

/**
 * delete_nodeint_at_index - function delete node in a linked
 * list at a certain index
 * @head: pointer to the next node
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *store = *head;
	listint_t *current = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(store);
		return (1);
	}

	while (x < index - 1)
	{
		if (!store || !(store->next))
			return (-1);
		store = store->next;
		x++;
	}


	current = store->next;
	store->next = current->next;
	free(current);

	return (1);
}
