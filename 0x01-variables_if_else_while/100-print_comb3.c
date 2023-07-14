#include <stdio.h>
/**
 * main - program entry
 * Return: 0 (success note)
 */

int main(void)
{

	int i;
	int n;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (!((n == i) || (i > n)))
			{
				putchar(i);
				putchar(n);
				if (!(n == '9' && i == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
