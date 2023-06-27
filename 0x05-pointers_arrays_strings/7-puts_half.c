#include "main.h"
#include "2-strlen.c"

/**
  *puts_half - starting point
  *@str: striing to be split
  *Return: void
  */
void puts_half(char *str)
{
	int y;
	int dE = 0;

	if (_strlen(str) % 2 != 0)
	{
		dE += 1;
	}
	for (y = (_strlen(str) + dE) / 2; y < _strlen(str); y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
