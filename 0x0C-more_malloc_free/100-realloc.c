#include "main.h"

/**
 * *_realloc - function that reallocates memory block
 * @ptr: pointer to the memory
 * @old_size: size of allocated memory
 * @new_size: size of new memory block
 * Return: pointer to new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *pointer;
	char *old_ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			pointer[x] = old_ptr[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			pointer[x] = old_ptr[x];
	}
	free(ptr);
	return (pointer);

}
