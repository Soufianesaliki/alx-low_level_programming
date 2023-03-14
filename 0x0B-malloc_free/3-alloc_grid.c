#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimentional array of integers
 * @width:int
 * @height:int
 * Return:int
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if ((height == 0) || (width == 0))
	{
		return (NULL);
	}
	else
	{
	       grid = (int **)malloc(sizeof(int *) * height);
	       if (grid == NULL)
		       return (NULL);
	       for (i = 0; i < height; i++)
	       {
		       grid[i] = (int *)malloc(sizeof(int) * width);
		       if (grid[i] == NULL)
			       return (NULL);
	       }
	       for (i = 0; i < height; i++)
	       {
		       for (j = 0; j < width; j++)
		       {
			       grid[i][j] = 0;
		       }
	       }
	       return (grid);
	}
}
