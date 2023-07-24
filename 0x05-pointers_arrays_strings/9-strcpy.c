#include "main.h"

/**
 * _strcpy - copies the string from src to dest
 * @dest: the string is copied here
 * @src: source of the copy
 * Return: dest
 */

char *_strcpy(char *dest, char *src)

{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
