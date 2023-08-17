#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: separator between the strings
 * @n: number of string to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int x;
	char *str;
	va_list arglist;

	va_start(arglist, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(arglist, char *);
		printf("%s", str);
		{
			if (separator != NULL && x < n - 1)
				printf("%s", separator);
		}
		va_end(arglist);
	}
	printf("\n");

}
