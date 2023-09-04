#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: file name
 * @text_conten: null terminated string to be written in the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fptr = NULL;
	int x;
	char str[15] = "text_content";

	fptr = fopen("filename", "w");
	if (fptr == NULL)
		return (0);

	write(fptr, str, 12);
	if 
	
	fclose(fptr);
}
