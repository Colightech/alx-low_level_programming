#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a grid
 * @width: width
 * @height: height
 * Return: return to grid
 */

int **alloc_grid(int width, int height)

{
	int x, y;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			free(grid);
			for (y = 0; y <= height; y++)
				free(grid[y]);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
