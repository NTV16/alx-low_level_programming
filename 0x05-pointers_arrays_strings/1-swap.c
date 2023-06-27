#include "main.h"

/**
  *swap_int - starting point
  *@a: first integer
  *@b: second integer
  *
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
