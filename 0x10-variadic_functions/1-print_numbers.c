#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_numbers- a function that prints numbers
  *@n: number of integers passed to the function
  *@separator: the string to be printed between numbers
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	va_list args;
	unsigned int a;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		num = va_arg(args, const unsigned int);
		printf("%d", num);

		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
