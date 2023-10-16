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
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
