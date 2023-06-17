#include <stdio.h>
/**
  *main-entry point
  *
  *description:printing all single digit
  *numbers of base 10
  *
  *Return:Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');

	return (0);
}
