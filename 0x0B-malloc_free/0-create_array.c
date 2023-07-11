#include "main.h"
#include <stdlib.h>

/**
  *create_array - array function
  *@size: size of the array
  *@c: char to be initialised with
  *Return: NULL or *arr
  */
char *create_array(unsigned int size, char c)
{
	unsigned int f;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (f = 0; f < size; f++)
	{
		p[f] = c;
	}
	return (p);
}
