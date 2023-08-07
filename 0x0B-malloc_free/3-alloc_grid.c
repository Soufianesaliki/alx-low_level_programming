#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * Each element of the grid should be initialized to 0
 * @width: width grid
 * @height: height grid
 * Return:	grid initialized with 0
 *		NULL if failed or if width or height is negative
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
