#include "search_algos.h"

/**
 * binary_search - a function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle, x;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		middle = (left + right) / 2;
		printf("Searching in array: ");
		for (x = left; x <= right; x++)
			printf("%i%s", array[x], x == right ? "\n" : ", ");
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return ((int)middle);
	}

	return (-1);
}
