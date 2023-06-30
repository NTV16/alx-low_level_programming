#include "main.h"

/**
  *reverse_array - starting point
  *@a: pointer
  *@n: operand
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int g = 0;
	int k;

	n = n - 1;

	while (g < n)
	{
		k = a[g];
		a[g++] = a[n];
		a[n--] = k;
	}
}
