#include "main.h"

/**
  *_strlen_recursion - starting point
  *@s: string
  *Return: integer
  */
int _strlen_recursion(char *s)
{
	int d = 0;

	if (*s)
	{
		d = _strlen_recursion (s + 1);
		return (d += 1);
	}
	return (0);
}
