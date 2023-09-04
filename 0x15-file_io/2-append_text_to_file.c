#include "main.h"

/**
 * append_text_to_file - a function that append text at the end of a file
 * @filename: file name
 * @text_content: null terminated string to be written in the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdtor;
	int appnd;
	int n;

	if (!filename)
		return (-1);

	fdtor = open(filename, O_WRONLY | O_APPEND);
	if (fdtor == -1)
		return (-1);
	if (text_content)
	{
		for (n = 0; text_content[n] != '\0'; n++)
		append = write(fdtor, text_content, n)
		if (apend == -1)
			return (-1);
	}

	close(fdtor);

	return (1);
}
