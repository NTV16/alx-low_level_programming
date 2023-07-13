#include "main.h"
#include <stdlib.h>

/**
  *array_range - function that creates an
  *array of integers.
  *@min: minimum no of elements
  *@max: maximum no of elements
  *Return: pointer to the new array
  */
int *array_range(int min, int max)
{
	int *foo;
	int a;
	int length;

	if (min > max)
	{
		return (NULL);
	}
	length = 0;
	for (a = min; a <= max; a++)
	{
		length++;
	}
	foo = malloc(sizeof(int) * length);
	if (foo == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (min <= max)
	{
		foo[a] = min;
		a++;
		min++;
	}
	return (foo);
}
