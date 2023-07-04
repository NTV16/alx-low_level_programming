#include <stdio.h>
#include "main.h"

/**
  *print_diagsums - prints the sum of the two diagonals of a square
  *matrix of integers.
  *
  *@a:Pointer
  *@size: size of array
  *
  *Return: Nothing
  */

void print_diagsums(int *a, int size)
{
	int p, sum, H;

	p = 0;
	sum = 0;
	H = size * size;
	while (p < H)
	{
		if (p % (size + 1) == 0)
			sum += a[p];
		p++;
	}
	printf("%d, ", sum);

	sum = 0;
	p = 0;
	while (p < H)
	{
		if (p % (size - 1) == 0 && p != (H - 1) && p != 0)
			sum += a[p];
		p++;
	}
	printf("%d\n", sum);
}
