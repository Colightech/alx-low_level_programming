#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: the index, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t dack;

	dack = 1;
	dack = dack << index;
	if (index > sizeof(size_t) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = dack ^ *n;
	return (1);
}
