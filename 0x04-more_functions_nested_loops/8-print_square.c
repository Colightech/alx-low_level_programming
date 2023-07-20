#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: the size of the square
 * Return: void
 */

void print_square(int size)

{
	if  (size <= 0)
		_putchar('\n');
	else
	{
		int a, b;

		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
