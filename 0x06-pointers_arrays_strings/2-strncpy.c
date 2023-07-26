#include "main.h"

/**
 * _strncpy - Write a function that copies a string
 * @dest: dest string
 * @src: source string
 * @n: number string to copy
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for ( ; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
