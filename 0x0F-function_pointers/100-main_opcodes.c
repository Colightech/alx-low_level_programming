#include <stdio.h>
#include <stdlib.h>

/**
 * main - a progrm prints its own opcodes
 * @argc: arguement counter
 * @argv: arguement vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int size, x;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (x = 0; x < size; x++)
	{
		if (x == size - 1)
		{
			printf("%02hhx\n", arr[x]);
			break;
		}
		printf("%02hhx ", arr[x]);
	}
	return (0);
}
