#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to the first node
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *walk = head;
	listint_t *run = head;

	if (!head)
		return (NULL);

	while (walk && run && run->next)
	{
		run = run->next->next;
		walk = walk->next;
		if (run == walk)
		{
			walk = head;
			while (walk != run)
			{
				walk = walk->next;
				run = run->next;
			}
			return (run);
		}
	}

	return (NULL);
}
