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
	char *str;
	char ch;
	int num;
	float flowt;

	va_list arglist;

	va_start(arglist, format);

	while (format[x] != '\0')
	{
		if (format[x] == 'c')
		{
			ch = va_arg(arglist, int);
			printf("%c, ", ch);
		}
		else if (format[x] == 'i')
		{
			num = va_arg(arglist, int);
			printf("%i, ", num);
		}
		else if (format[x] == 'f')
		{
			flowt = va_arg(arglist, double);
			printf("%f, ", flowt);
		}
		else if (format[x] == 's')
		{
			str = va_arg(arglist, char *);
			printf("%s ", str);
		}
		if (str == NULL)
			printf("(nil)");
		x++;

		va_end(arglist);
	}
	printf("\n");
}
