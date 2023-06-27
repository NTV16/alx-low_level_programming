#include "main.h"
#include "2-strlen.c"

/**
  *rev_string - reverses a string
  *
  *@s: string printed
  *Return: void
*/
void rev_string(char *s)
{
	int x;
	char z;

	for (x = 0; x < _strlen(s) / 2; x++)
	{
		z = s[x];
		s[x] = s[_strlen(s) - x - 1];
		s[_strlen(s) - x - 1] = z;
	}
}

