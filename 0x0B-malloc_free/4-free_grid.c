#include "main.h"
#include <stdlib.h>
/**
  *free_grid - function to free a 2D array
  *@grid: pointer to an array
  *@height: height of the 2D array
  *Return: pointer
  */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
