#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: the string variable
 * Return: to return the result
 */

void _puts(char *str)

{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
