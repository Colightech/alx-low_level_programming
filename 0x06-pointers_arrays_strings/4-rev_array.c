#include "main.h"
#include <stdio.h>

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: integer1
 * @n: integer2
 * Return: void
 */

void reverse_array(int *a, int n)

{
	int x;
	int tmp;

	for (x = 0;  x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = tmp;
	}
}
