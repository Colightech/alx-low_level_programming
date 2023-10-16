#include "main.h"

/**
 * _strlen - a function that return the length of a string
 * @s: string character to return
 * Return: result of the function
 */

int _strlen(char *s)

{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
