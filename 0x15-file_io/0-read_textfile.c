#include "main.h"

/**
 * read_textfile - function that reads a text file
 *  and prints it to the POSIX standard output.
 *  @filename: file pointer
 *  @letters: the zise of the content to read from the file
 *  Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdtor;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fdtor = open(filename, O_RDONLY);
	if (fdtor == -1)
		return (0);
	
	rd = read(fdtor, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(fdtor);
	free(buffer);
	return (wr);
}
