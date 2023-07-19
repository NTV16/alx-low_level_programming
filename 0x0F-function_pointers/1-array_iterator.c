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
	size_t w;

	for (w = 0; w < size; w++)
	{
		action(array[w]);
	}
}
