#include "main.h"
#include "2-strlen.c"

/**
  *puts2 - starting point
  *@str: pointer char
  *Description: str prints every other character of a string
  *Return: void
  */
void puts2(char *str)
{
	int h;

	for (h = 0; h < _strlen(str); h++)
	{
		if (h % 2 == 0)
		{
			_putchar(str[h]);
		}
	}
	_putchar('\n');
}
