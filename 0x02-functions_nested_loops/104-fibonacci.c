#include <stdio.h>

/**
  *main - prints the first 98 Fibonacci numbers, starting with 1 and 2,
  *followed by a new line.
  *
  *Return: complete
  */

int main(void)
{
	unsigned long int x;
	unsigned long int h = 1;
	unsigned long int z = 2;
	unsigned long int c = 1000000000;
	unsigned long int b1;
	unsigned long int b2;
	unsigned long int a1;
	unsigned long int a2;

	printf("%lu", h);

	for (x = 1; x < 91; x++)
	{
		printf(", %lu", z);
		z = z + h;
		h = z - h;
	}
	b1 = (h / c);
	b2 = (h % c);
	a1 = (z / c);
	a2 = (z % c);

	for (x = 92; x < 99; x++)
	{
		printf(", %lu", a1 + (a2 / c));
		printf("%lu", a2 % c);
		a1 = a1 + b1;
		b1 = a1 - b1;
		a2 = a2 + b2;
		b2 = a2 - b2;
	}

	printf("\n");
	return (0);
}
