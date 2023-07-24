#include "main.h"

/**
 * print_rev - this function that prints a string, in reverse
 * @s: string variable
 * Return: void
 */

void print_rev(char *s)

{
	int n;
	int count = 0;

	for (n = 0; s[n] != '\0'; n++)
		count++;
	for (n = count - 1; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
