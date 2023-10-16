#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string1
 * @accept: string2
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)

{
	int x;

	while (*s)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
