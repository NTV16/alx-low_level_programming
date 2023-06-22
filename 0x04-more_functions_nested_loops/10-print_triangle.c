#include "main.h"

/**
  *print_triangle - starting point
  *@size:is the size of the triangle
  *Return: void
  */
void print_triangle(int size)
{
	int p;
	int q;
	int r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < size; p++)
		{
			for (q = size - p; q > 1; q--)
			{
				_putchar(32);
			}
			for (r = 0; r <= p; r++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
