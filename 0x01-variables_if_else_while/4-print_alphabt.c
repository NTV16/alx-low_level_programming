#include <stdio.h>
/**
  *main-entry point
  *description:lowercase alphabets except
  *q and e
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}

	putchar('\n');
	return (0);
}

