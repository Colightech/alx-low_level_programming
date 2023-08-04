#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: dest memory
 * @src: source memory
 * @n: number of bytes to copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
