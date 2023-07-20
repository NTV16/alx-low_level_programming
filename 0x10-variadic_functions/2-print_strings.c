#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_strings- function that prints strings
  *@separator: tring to be printed between the strings
  *@n: number of strings passed to the function
  *Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *ptr;
	va_list args;
	unsigned int k;

	va_start(args, n);

	for (k = 0; k < n; k++)
	{
		ptr = va_arg(args, const char *);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
		if (k < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
