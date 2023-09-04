#include "main.h"
#include <stdio.h>
/**
 * error_check - checks for erroes
 * @file_from: source file
 * @file_to: destination file
 * @argv: arguement vector
 * Return: void
 */

void error_check(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - a program that copies the content of a file to another file.
 * @argc: arguement counter
 * @argv: arguement vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	ssize_t rd, wrt;
	int file_to;
	int file_from;
	int err;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 664);
	error_check(file_from, file_to, argv);

	rd = 1024;
	while (rd == 1024)
	{
		rd = read(file_from, buffer, 1024);
		if (rd == -1)
			error_check(-1, 0, argv);
		wrt = write(file_to, buffer, rd);
		if (wrt == -1)
			error_check(0, -1, argv);
	}

	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
