#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
  *main - starting point
  *@argc: argument count
  *@argv: argument vector
  *Return: Always (0) Success
  */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc);
	return (0);
}