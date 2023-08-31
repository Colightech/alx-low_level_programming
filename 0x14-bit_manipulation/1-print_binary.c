#include "main.h"

/**
 * recurse - to find the binary equivalent of a number
 * @n: number
 * Return: void
 */

void recurse(unsigned long int n)
{
	if (n == 0)
		return;
	recurse(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to convert to binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		recurse(n);
	}
}
