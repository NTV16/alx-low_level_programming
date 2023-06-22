#include "main.h"
/**
  *more_numbers - starting point
  *Return:10 times the numbers, from 0 to 14
  */
void more_numbers(void)
{
	int y;
	int z;

	for (y = 0; y < 10; y++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z > 9)
			{
				_putchar((z / 10) + '0');
			}
			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
