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

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{		
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
