#include "main.h"
#include <stdlib.h>

/**
  *_calloc -function that allocates
  *memory for an array
  *@nmemb: no of elements
  *@size: size in bytes
  *Return: void or NULL
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int z;
	char *ntv;
	void *vet;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	vet = malloc(size * nmemb);

	if (vet == NULL)
	{
		return (NULL);
	}
	ntv = vet;
	for (z = 0; z < (size * nmemb); z++)
	{
		ntv[z] = '\0';
	}
	return (vet);
}
