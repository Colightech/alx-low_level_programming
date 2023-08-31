#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 *  you would need to flip to get from one number to another.
 *  @n: number
 *  @m: member
 *  Return: return 1
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t output;
	size_t track;

	output = n ^ m;
	for (track = 0; output > 0;)
	{
		if ((output & 1) == 1)
			track++;
		output = output >> 1;
	}
	return (track);
}
