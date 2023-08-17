#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: string between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int x;
	int num;

	va_list arglist;

	if (separator == NULL)
		return;
	if (n == 0)
		return;
	va_start(arglist, n);

	for (x = 0; x < n; x++)
	{
		num = va_arg(arglist, int);
		printf("%d", num);
		{
			if (separator != NULL && x < n - 1)
				printf("%s", separator);
		}
		va_end(arglist);
	}
	printf("\n");
}
