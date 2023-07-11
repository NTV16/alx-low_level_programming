#include "main.h"
#include <stdlib.h>

/**
  *_strdup - function that duplicates a string
  *@str: string to be duplicated
  *Return: pointer to the duplicate string
  */
char *_strdup(char *str)
{
	int a = 0;
	char *d;
	int y = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[y])
	{
		y++;
	}
	d = malloc((sizeof(char) * y) + 1);
	if (d == NULL)
		return (NULL);
	while (a < y)
	{
		d[a] = str[a];
		a++;
	}
	d[a] = '\0';
	return (d);
}
