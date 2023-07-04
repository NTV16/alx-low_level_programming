#include "main.h"

/**
  *print_chessboard - starting point
  *@a: array
  *Return: void
  */
void print_chessboard(char (*a)[8])
{
	int t;
	int v;

	for (t = 0; t <= a; t++)
	{
		for (v = 0; v < 8; v++)
		{
			_putchar ('v');
		}
		_putchar ('t');
	}
}
