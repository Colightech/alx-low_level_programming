#include "main.h"

/**
 * puts_half - function that prints half of a string number
 * @str: the string variable
 * Return: void
 */

void puts_half(char *str)

{
	int x, n, count = 0;

	for (x = 0; str[x] != '\0'; x++)
		count++;
	n = (count - 1) / 2;
	for (x = n + 1; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
