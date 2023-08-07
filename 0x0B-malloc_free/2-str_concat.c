#include "main.h"

/**
 * str_concat -  a function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: return val
 */

char *str_concat(char *s1, char *s2)
{
	char *val;
	int lent1 = 0;
	int lent2 = 0;
	int x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		lent1++;
	for (x = 0; s2[x] != '\0'; x++)
		lent2++;
	val = malloc(sizeof(char) * (lent1 + lent2) + 1);
	if (val == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		val[x] = s1[x];
	for (x = 0; s2[x] != '\0'; x++)
		val[lent1 + x] = s2[x];
	return (val);
}
