#include "main.h"

/**
 * puts2 - this function that prints an even number
 * @str: string to been printed
 * Return: void
 */

void puts2(char *str)

{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
