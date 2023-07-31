#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: string1
 * @needle: string2
 * Return: return to
 */

char *_strstr(char *haystack, char *needle)

{
	int x;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (haystack[x] == needle[x])
		{
			x = 0;
			do {
				if (needle[x + 1] == '\0')
					return (haystack);
				x++;
			} while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return ('\0');
}
