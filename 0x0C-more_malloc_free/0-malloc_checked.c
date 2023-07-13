#include "main.h"
#include <stdlib.h>

/**
  *malloc_checked -allocates memory using malloc.
  *@b: integer to be used
  *Return: void or malloc pointer
  */
void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);

	if (mal == NULL)
	{
		exit(98);
	}
	else
	{
		return (mal);
	}
}
