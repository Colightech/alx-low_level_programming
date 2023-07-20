#include <stdio.h>
#include "main.h"

/**
 * main - to find and print the largest prime facftor of 612852475143
 * Return: 0 successful
 */

int main(void)

{
	unsigned long i, n = 612852475143;

	for (i = 3; i < 782849 ; i = i + 1)
	{
		while ((n % i == 0) && (n != i))
		{
			n = n / i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
