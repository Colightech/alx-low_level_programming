#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguements
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list arglist;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(arglist, n);

	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(arglist, int);
	}
	va_end(arglist);

	return (sum);
}
