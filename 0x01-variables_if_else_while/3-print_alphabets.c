#include <stdio.h>
/**
  *main-entry point
  *
  *description:printing lower and uppercase
  *alphabets
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char c;
	char t;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (t = 'A'; t <= 'Z'; t++)
	{
		putchar(t);
	}

	putchar('\n');
	return (0);
}
