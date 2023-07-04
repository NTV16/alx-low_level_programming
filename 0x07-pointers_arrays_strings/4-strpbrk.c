#include "main.h"

/**
  * _strpbrk - starting point
  *@s: pointer 1
  *@accept: pointer 2
  *Return: char
  */
char *_strpbrk(char *s, char *accept)
{
	char n;
	int p;

	for (p = 0; p < accept; p++)
	{
		*s(0) = *accept(n);
		*accept(n) = *s(n);
		return (s);
	}
	return (*s);
}
