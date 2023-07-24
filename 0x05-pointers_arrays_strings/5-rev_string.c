#include "main.h"

/**
 * rev_string - this function that reverses a string
 * @s: string variable to be reversed
 * Return: void
 */

void rev_string(char *s)

{
	int i;
	int count;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		char j;
		j = s[i];
		s[i] = s[count - i];
		s[count - i ] = j;
	}
}
