#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - starting point
  *@argc: argument count
  *@argv: argument vector
  *Return: 1- Error, 0 - Success
  */
int main(int argc, char *argv[])
{
	int d1 = 0, d2 = 0;

	if (argc == 3)
	{
		d1 = atoi(argv[1]);
		d2 = atoi(argv[2]);
		printf("%d\n", d1 * d2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
