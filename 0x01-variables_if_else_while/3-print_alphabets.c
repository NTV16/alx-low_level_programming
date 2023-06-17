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

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	char t;

	for (t = 'A'; t <= 'Z'; t++)
	{
		putchar(t);
	}
	return (0);
}
