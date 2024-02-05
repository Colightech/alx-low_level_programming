#include "search_algos.h"

/**
 * linear_search - a function that searches for a value
 * in an array of integers using the Linear search algorithm
 * @array: array of integer to search from
 * @size: size of the array
 * @value: the search value
 * Return: index where the value is found
 */

int linear_search(int *array, size_t size, int value)
{
	int x;

	if (!array || array == NULL)
		return (-1);
	
	for (x = 0; x < (int)size; x++)
	{
		printf("Value checked array[%u] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
