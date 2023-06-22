#include "main.h"

/**
  *print_square - starting point
  *@size: is the size of the square
  *Return: void
  */
void print_square(int size)
{
	int f, g;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (f = 0; f < size; f++)
		{
			for (g = 0; g < size; g++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
