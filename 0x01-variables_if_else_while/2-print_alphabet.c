#include <stdio.h>
/**
 * main - i started here
 * Return: 0 (end of run)
 */

int main(void)

{
	char e;

	e = 'a';
	while (e <= 'z')
	{
		putchar(e);
		e++;
	}
	putchar('\n');
	return (0);
}
