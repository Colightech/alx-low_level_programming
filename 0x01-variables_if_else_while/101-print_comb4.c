#include <stdio.h>
/**
 * main - program starts
 * Return: 0 (success note)
 */

int main(void)
{
	int wan;
	int then;
	int hund;

	for (hund = '0'; hund <= '9'; hund++)
	{
		for (then = '0'; then <= '9'; then++)
		{
			for (wan = '0'; wan <= '9'; wan++)
			{
				if (!((wan == then) || (then == hund) || (then > wan) || (hund > then)))
				{
					putchar(hund);
					putchar(then);
					putchar(wan);
					if (!(wan == '9' && hund == '7' && then == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
