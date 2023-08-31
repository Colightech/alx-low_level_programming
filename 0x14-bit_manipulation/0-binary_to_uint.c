#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count, x, y, power, sum;
	int base = 2;

	sum = 0;
	power = 1;

	if (b == NULL)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
		;
	if (count == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		for (y = count - 1; y > 0; y--)
			power = power * base;
		sum = sum + (power * (b[x] - 48));
		count--;
		power = 1;
	}
	return (sum);
}
