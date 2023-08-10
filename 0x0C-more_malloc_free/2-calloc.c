#include "main.h"

/**
 *_memset - fill with constant byte
 * @s: pointer
 * @b: char
 * @n: number to copy
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: element
 * @size: size of element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);

	return (pointer);
}
