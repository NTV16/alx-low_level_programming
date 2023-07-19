#include <stdlib.h>
#include "function_pointers.h"

/**
  *int_index- function that searches for an integer
  *@size: number of elements
  *@cmp: pointer to the function used to
  *compare values
  *@array: array
  *Return: integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int d;

	if (size <= 0)
		return (-1);
	for (d = 0; d < size; d++)
	{
		if (cmp(array[d]) != 0)
			return (d);
	}
	return (-1);
}
