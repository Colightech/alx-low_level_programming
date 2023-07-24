#include "main.h"

/**
 * rev_string - this function that reverses a string
 * @s: string variable to be reversed
 * Return: void
 */

void rev_string(char *s)

{
	int lent = 0, index = 0;
	char tmp;

	while (s[index++])
	lent++;

	for (index = lent - 1; index >= lent / 2; index--)
	{
		tmp = s[index];
		s[index] = s[lent - index - 1];
		s[lent - index - 1] = tmp;
	}

}
