#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: paramer
 * Return: return pointer to d allocated space
 */

void *malloc_checked(unsigned int b)

{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
