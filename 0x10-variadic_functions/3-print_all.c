#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all -  a function that prints anything.
 * @format: any format to be printed
 * Return: void
 */

void print_all(const char * const format, ...)

{
	int x = 0;
	char *str, *dev = "";

	va_list arglist;

	va_start(arglist, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", dev, va_arg(arglist, int));
					break;
				case 'i':
					printf("%s%d", dev, va_arg(arglist, int));
					break;
				case 'f':
					printf("%s%f", dev, va_arg(arglist, double));
					break;
				case 's':
					str = va_arg(arglist, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", dev, str);
					break;
				default:
					x++;
					continue;
			}
			dev = ", ";
			x++;
		}
	}
	va_end(arglist);
	printf("\n");
}
