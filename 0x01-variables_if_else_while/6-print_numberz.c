#include <stdio.h>
/**
 * main - the starting
 * Return: 0 (as success note)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
