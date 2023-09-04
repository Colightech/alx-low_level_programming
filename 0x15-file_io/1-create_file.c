#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: file name
 * @text_content: null terminated string to be written in the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fdtor;
	int wr;
	int n = 0;

	if (!filename)
		return (-1);

	fdtor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (fdtor == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[n] != '\0')
		n++;
	wr = write(fdtor, text_content, n);

	if (wr == -1)
		return (-1);

	close(fdtor);

	return (1);
}
