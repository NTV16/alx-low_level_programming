#include <stdio.h>
#include "function_pointers.h"

/**
  *array_iterator- executes a function given as
  *a parameter on each element of an array
  *@size: size of the array
  *@action: pointer to my function
  *@array: pointer to array_iterator
  *Return: void
  */
void array_iterator(int *array, size_t size, void(*action) (int))
{
	unsigned int r;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	if (array == NULL)
		return;

	for (r = 0; r < size; r++)
	{
		action(array[r]);
	}
}
