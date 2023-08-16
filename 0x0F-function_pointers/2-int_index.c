#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer.
 * @array: array of numbers
 * @size: array size
 * @cmp: function pointer
 * Return: search value or -1
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
