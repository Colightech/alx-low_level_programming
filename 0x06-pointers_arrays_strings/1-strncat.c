#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings
 * @dest: dest string
 * @src: source string
 * @n: number of byte needed
 * Return: return pointer to dest
 */

char *_strncat(char *dest, char *src, int n)

{
	char destl;
	int x;

	for (x = 0; dest[x] != '\0'; x++)
		destl++;
	for (x = 0; x < n && *src != '\0'; x++)
	{
		dest[destl + x] = src[x];
		src++;
	}
	dest[destl + x] = '\0';
	return (dest);
}
