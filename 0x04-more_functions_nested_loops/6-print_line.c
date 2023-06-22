#include "main.h"

/**
  *print_line - starting point
  *@n: the number of times the character _ should be printed
  *Return: void
  */
void print_line(int n)
{
	int h;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 0; h < n; h++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
