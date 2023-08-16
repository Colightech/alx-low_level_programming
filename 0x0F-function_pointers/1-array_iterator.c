#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Write a function that executes a function
 * @array: array
 * @size: array size
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x <= size; x++)
		action(array[x]);
}
