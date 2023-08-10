#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * @n: size of the arrays
 * Return: return to newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *str;
	unsigned int x;
	unsigned int a = 0, b = 0;
	unsigned int s1lent = 0;
	unsigned int s2lent = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		s1lent++;
	for (x = 0; s2[x] != '\0'; x++)
		s2lent++;

	if (n < s2lent)
	{
		str = malloc(sizeof(char) * (s1lent + n + 1));
	}
	else
		str = malloc(sizeof(char) * (s1lent + s2lent + 1));

	if (str == NULL)
		return (NULL);
	while (a < s1lent)
	{
		str[a] = s1[a];
		a++;
	}
	while (n < s2lent && a < (s1lent + n))
		str[a++] = s2[b++];
	while (n >= s2lent && a < (s1lent + s2lent))
		str[a++] = s2[b++];
	str[a] = '\0';
	return (str);
}
