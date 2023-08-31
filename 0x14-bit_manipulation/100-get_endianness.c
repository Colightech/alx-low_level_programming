#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 * Return: 1 or 0
 */

int get_endianness(void)
{
	int a = 1;
	int endians;

	endians = (int) (((char *) &a)[0]);
	return (endians);
}
