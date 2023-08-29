#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - functiion that loop through the list
 * @head: A pointer to the first node
 * Return: number of nodes in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *current, *jet;
	size_t ball = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	current = head->next;
	jet = (head->next)->next;

	while (jet)
	{
		if (current == jet)
		{
			current = head;
			while (current != jet)
			{
				ball++;
				current = current->next;
				jet = jet->next;
			}

			current = current->next;
			while (current != jet)
			{
				jet++;
				current = current->next;
			}

			return (ball);
		}

		current = current->next;
		jet = (jet->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the next node
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ball, ndx = 0;

	ball = looped_listint_len(head);

	if (ball == 0)
	{
		for (; head != NULL; ball++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ndx = 0; ndx < ball; ndx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (ball);
}
