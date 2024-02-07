#include "search_algos.h"

int binary_search_helper(int *array, int value,
			 size_t left, size_t right);
size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * binary_search_helper - searches for a value in an integer array using a
 * binary search algorithm, not guaranteed to return lowest index if `value`
 * appears twice in `array` (modified from `binary_search`)
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @left: starting index
 * @right: ending index
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search_helper(int *array, int value,
			 size_t left, size_t right)
{
	size_t middle, x;

	if (!array)
		return (-1);

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

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using an exponential search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t left, right, boundry = 1;

	if (!array || size == 0)
		return (-1);

	while (boundry < size && array[boundry] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       boundry, array[boundry]);
		boundry *= 2;
	}

	left = boundry / 2;
	right = min(boundry, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (binary_search_helper(array, value, left, right));
}
