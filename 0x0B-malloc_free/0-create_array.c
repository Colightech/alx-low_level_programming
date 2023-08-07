#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * @size: arrays size
 * @c: character to store
 * Return: return ponter to the array
 */

char *create_array(unsigned int size, char c)

{
	char *arry;
	unsigned int x;

	if (size == 0)
		return (NULL);
	arry = malloc(sizeof(char) * size);
	if (arry == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		arry[x] = c;
	return (arry);
}
