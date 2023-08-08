#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: parameter1
 * @av: parameter2
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int x, n, y = 0, z = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n]; n++)
			z++;
	}
	z += ac;

	str = malloc(sizeof(char) * z + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (n = 0; av[x][n]; n++)
	{
		str[y] = av[x][n];
		y++;
	}
	if (str[y] == '\0')
	{
		str[y++] = '\n';
	}
	}
	return (str);
}
