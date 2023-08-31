#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number
 * @index:  index, starting from 0
 * Return:  the value of the bit at index index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (x = 0; x < index; x++)
		n = n >> 1;
	return ((n & 1));
}
