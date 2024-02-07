#include "search_algos.h"
/**
 * linear_skip - searches for a value conatined in a skip list; assumes a
 * list with sorted values and a single skip layer with nodes at every index
 * which is a multiple of the square root of the size of the list
 *
 * @list: pointer to the head of the skip list to traverse
 * @value: value to search for
 * Return: pointer on the first node where value is located, or NULL if list
 * is NULL or value not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tempt = NULL, *stop = NULL;

	if (!list)
		return (NULL);

	tempt = list;
	while (tempt && tempt->express && tempt->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       tempt->express->index, tempt->express->n);
		tempt = tempt->express;
	}
	stop = tempt;
	while (stop && stop->next != stop->express)
		stop = stop->next;
	if (tempt->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       tempt->express->index, tempt->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       tempt->index, tempt->express->index);
	}
	/* value is greater than last express node, potentially out of list */
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       tempt->index, stop->index);

	while (tempt != stop && tempt->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       tempt->index, tempt->n);
		tempt = tempt->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
	       tempt->index, tempt->n);

	if (tempt == stop)
		return (NULL);
	return (tempt);
}
