#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index:  the index, starting from 0
 * Return: the value of the bit at index index or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int dack;

	if (index >  sizeof(size_t) * 8)
		return (-1);

	dack = 1;
	dack = dack << index;
	*n = ((*n) | dack);
	return (1);
}
