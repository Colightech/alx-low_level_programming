#include "main.h"

/**
 * _strdup -  a function that returns a pointer to a newly allocated space
 * @str: string
 * Return: return pointer to dup
 */

char *_strdup(char *str)

{
	char *dupl;
	int x;
	int lent = 0;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		lent++;
	dupl = malloc(sizeof(char) * lent + 1);
	if (dupl == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		dupl[x] = str[x];
	return (dupl);
}
