#include <stdio.h>
/**
 * main - i started here
 * Return: 0 (end of run)
 */

int main(void)

{
	char e;
	char f;

	e = 'a';
	f = 'A';
	while (e <= 'z')
	{
		putchar(e);
		e++;
	}
	while (f <= 'Z')
	{
		putchar(f);
		f++;
	}
	putchar('\n');
	return (0);
}
