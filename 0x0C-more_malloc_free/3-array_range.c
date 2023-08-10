#include "main.h"

/**
 * array_range - array_range
 * @min: minimun value
 * @max: maximum value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *pointer;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		pointer[x] = min++;

	return (pointer);
}
