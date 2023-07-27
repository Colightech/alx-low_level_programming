#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @n: pointer
 * Return: return n
 */

char *leet(char *n)

{
	int x;
	int y;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == str1[y])
			{
				n[x] = str2[y];
			}
		}
	}
	return (n);
}
