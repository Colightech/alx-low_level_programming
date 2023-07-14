#include <stdio.h>
/**
 * main - programs begining
 * Return: 0 (success note)
 */

int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
