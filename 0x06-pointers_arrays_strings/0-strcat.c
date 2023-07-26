#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: dest string
 * @src: source string
 * Return: return pointer to dest
 */

char *_strcat(char *dest, char *src)

{
	char destl;
	char srcl;
	int x;

	for (x = 0; dest[x] != '\0'; x++)
		destl++;
	for (x = 0; src[x] != '\0'; x++)
		srcl++;
	for (x = 0; x <= srcl; x++)
		dest[destl + x] = src[x];
	return (dest);
}
