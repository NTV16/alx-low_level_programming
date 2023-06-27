#include "main.h"
#include "2-strlen.c"

/**
  *print_rev - strating point
  *@s: pointer
  *Return: void
  */
void print_rev(char *s)
{
	int c;

	for (c = _strlen(s) - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
