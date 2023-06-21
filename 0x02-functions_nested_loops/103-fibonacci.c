#include <stdio.h>

/**
  *main - finds and prints the sum of the even-valued terms,
  *followed by a new line.
  *
  *Return: void
  */

int main(void)
{
	int t;
	unsigned long int a, b, sum, next;

	a = 1;
	b = 2;
	sum = 0;

	for (t = 1; t <= 33; t++)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		next = a + b;
		a = b;
		b = next;
	}

	printf("%lu\n", sum);

	return (0);
}
