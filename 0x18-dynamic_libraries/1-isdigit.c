#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: character to check
 * Return: 1 for success, 0 for fail.
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
