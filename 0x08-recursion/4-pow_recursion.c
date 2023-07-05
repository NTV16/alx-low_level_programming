#include "main.h"

/**
  * _pow_recursion - starting point
  *@x: base value
  *@y: exponent value
  *Return: integer
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
