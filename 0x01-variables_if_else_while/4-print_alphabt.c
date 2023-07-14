#include <stdio.h>
/**
 * main - the program starts here
 * Return: 0 (succeed here)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		putchar(i);
	}
	putchar('\n');
	return (0);
}
