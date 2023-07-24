#include "main.h"

/**
 * print_array - unction that prints n elements of an array of integers
 * @a: integer1
 * @n: integer2
 * Return: void
 */

void print_array(int *a, int n)

{
	int x;

	for (x = 0; x < n ; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	printf("\n");
}
