#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string1
 * @s2: string2
 * Return: 0 on successful
 */

int _strcmp(char *s1, char *s2)

{
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			if (s1[x] < s2[x])
				return (s1[x] - s2[x]);
			else if (s1[x] > s2[x])
				return (s1[x] - s2[x]);
		}
	}
	return (0);
}
