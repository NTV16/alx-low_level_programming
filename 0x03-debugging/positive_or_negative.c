#include "main.h"

/**
  *positive_or_negative - starting point
  *@i: Check number
  *Return: Always 0 (Success)
  */
int positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
