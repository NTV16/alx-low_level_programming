#include <stdarg.h>
#include "variadic_functions.h"

/**
  *sum_them_all- function that returns the sum
  * of all its parameters
  *@n: no of arguments
  *Return: integer
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int x;
	unsigned int t;

	va_list(args);

	if (n == 0)
		return (0);
	va_start(args, n);

	for (t = 0; t < n; t++)
	{
		x = va_arg(args, const unsigned int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
