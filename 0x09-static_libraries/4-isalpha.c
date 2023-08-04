#include "main.h"

/**
 * _isalpha -this function checks for alphabetic character
 * @c: character to check
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
