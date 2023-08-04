#include "main.h"
/**
 * _strncpy - this function copy n string
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
