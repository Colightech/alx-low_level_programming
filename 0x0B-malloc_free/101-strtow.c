#include "main.h"

/**
 * count_word - this function count the world in the string
 * @s: string
 * Return: number of words
 */
int count_word(char *s)
{
	int alert, x, y;

	alert = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			alert = 0;
		else if (alert == 0)
		{
			alert = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - a function that splits a string into words.
 * @str: string
 * Return: NULL or Empty string
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j = 0, len = 0, words, x = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (x)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (x + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - x;
				j++;
				x = 0;
			}
		}
		else if (x++ == 0)
			start = i;
	}

	matrix[j] = NULL;

	return (matrix);
}
