#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: the pointer
 * @b: constant byte
 * @n: size of byte
 * Return: return pointer
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
