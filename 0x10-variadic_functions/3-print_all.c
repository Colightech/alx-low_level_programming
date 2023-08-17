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
	char ch;
	float flowt;
	int num;

	va_list arglist;

	va_start(arglist, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					ch = va_arg(arglist, int);
					printf("%s%c", dev, ch);
					break;
				case 'i':
					num = va_arg(arglist, int);
					printf("%s%d", dev, num);
					break;
				case 'f':
					flowt = va_arg(arglist, double);
					printf("%s%f", dev, flowt);
					break;
				case 's':
					str = va_arg(arglist, char *);
					if (str == NULL)
					printf("(nil)");
					printf("%s%s", dev, str);
					break;
				default:
				x++;
				continue;
			}
			dev = ", ";
			x++;
		}
		va_end(arglist);
	}
	printf("\n");
}
