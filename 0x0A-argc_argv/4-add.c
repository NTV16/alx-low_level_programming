#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *main - starting point
  *@argc: argument count
  *@argv: argument vector
  *Return: Error (-1), Success (0)
  */
int main(int argc, char *argv[])
{
	int e;
	unsigned int g, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (e = 1; e < argc; e++)
		{
			c = argv[e];

			for (g = 0; g < strlen(c); g++)
			{
				if (c[g] < 48 || c[g] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
