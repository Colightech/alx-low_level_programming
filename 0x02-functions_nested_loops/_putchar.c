#include "main.h"
#include <unistd.h>

/**
 * _putchar - this write charater c to stdout
 * @c: the character to print are in c
 *
 * Return: success note
 * on erro, -1 is return, and errno is set appriopriately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
