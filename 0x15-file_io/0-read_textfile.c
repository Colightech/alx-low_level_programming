#include "main.h"

void _puts(char *str);

/**
 * _puts - function that print string
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}

/**
 * read_textfile - function that reads a text file
 *  and prints it to the POSIX standard output.
 *  @filename: file pointer
 *  @letters: the zise of the content to read from the file
 *  Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	unsigned int x;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(letters));
	if (buffer == NULL)
		return (0);

	fptr = fopen("filename", "r");
	if (fptr == NULL)
		return (0);
	for (x = 0; x <= letters; x++)
	{
		fgets(buffer, letters, fptr);
		_puts(buffer);
	}
	fclose(fptr);
	free(buffer);
	return (0);
}
