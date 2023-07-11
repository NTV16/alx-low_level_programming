#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid -  function that returns a pointer to a 2 dimensional
  *array of integers
  *@width: wdth of the 2D array
  *@height: height of the 2D array
  *Return: pointer to a 2D array
  */
int **alloc_grid(int width, int height)
{
	int **x;
	int e, f, g, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	x = malloc(sizeof(int *) * height);
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	for (e = 0; e < height; e++)
	{
		x[e] = malloc(sizeof(int) * width);
		if (x[e] == NULL)
		{
			for (f = e; f >= 0; f--)
			{
				free(x[e]);
			}
			free(x);
			return (NULL);
		}
	}
	for (g = 0; g < height; g++)
	{
		for (h = 0; h < width; h++)
		{
			x[g][h] = 0;
		}
	}
	free(x);
	return (x);
}
