#include <stdio.h>

/**
 * main - this program count the number of arguement passed into it
 * @argc: arguement counter
 * @argv: arguement vector (storage)
 * Return: 0
 */

int main(int argc, char *argv[])

{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
