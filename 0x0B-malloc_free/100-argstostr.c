#include "main.h"
#include <stdlib.h>
/**
  *argstostr - function to concantenate arguments
  *@ac: argument counter
  *@av: string
  *Return: concantenated string
  */
char *argstostr(int ac, char **av)
{
	char *y, *z;
	int a, b, c, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		y = av[a];
		b = 0;

		while (y[b++])
			len++;
		len++;
	}

	z = (char *)malloc(sizeof(char) * (len + 1));
	if (z == NULL)
		return (NULL);

	for (a = 0, b = 0; a < ac && b < len; a++)
	{
		y = av[a];
		c = 0;

		while (y[c])
		{
			z[b] = y[c];
			c++;
			b++;
		}
		z[b++] = '\n';
	}
	z[b] = '\0';

	return (z);
}
