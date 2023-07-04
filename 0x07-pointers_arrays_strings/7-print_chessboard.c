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

	t = 0;
	while (t < 8)
	{
		v = 0;
		while (v < 8)
		{
			_putchar(a[t][v]);
			v++;
		}
		_putchar('\n');
		t++;
	}
}
