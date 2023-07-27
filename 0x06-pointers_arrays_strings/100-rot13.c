#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: the index
 * Return: return pointer
 */

char *rot13(char *s)

{
	int x;
	int y;
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char drot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == d[y])
			{
				s[x] = drot[y];
				break;
			}
		}
	}
	return (s);
}
