#include <stdio.h>

/**
 * main - this program print all arguement it recieve
 * @argc: arguement counter
 * @argv: arguement vector (storage)
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
