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
	while (*haystack != '\0')
	{
		if (*needle == *haystack)
			return (needle);
		haystack++;
	}
	if (*needle == *haystack)
		return (needle);
	return (NULL);
}
