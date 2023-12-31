#include "main.h"
/**
 * _memset - fill a block of memory
 * @s: starting address of memory to be filled
 * @b desired value
 * @n: bytes to be changed
 *
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
