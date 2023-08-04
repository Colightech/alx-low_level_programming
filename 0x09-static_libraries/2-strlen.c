#include "main.h"
/**
 * _strlen - return string length
 * @s: string
 * Return: to return  length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
