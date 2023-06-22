#include "main.h"

/**
  *print_diagonal - starting point
  *@n: the number of times the character \ should be printed
  *Return: void
  */
void print_diagonal(int n)
{
	int w;
	int v;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (w = 0; w < n; w++)
		{
			for (v = 0; v < w; v++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
