#include "main.h"

/**
 * swap_int - to swap the value two int
 * @a: integer1
 * @b: integer2
 * Return: void
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
