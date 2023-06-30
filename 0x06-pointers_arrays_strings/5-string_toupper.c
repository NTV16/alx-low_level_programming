#include "main.h"

/**
  *string_toupper - starting point
  *@f: pointer
  *Return: char
  */
char *string_toupper(char *f)
{
	int h = 0;

	while (f[h] != '\0')
	{
		if (f[h] >= 'a' && f[h] <= 'z')
		{
			f[h] = f[h] - 32;
		}
		h++;
	}
	return (f);
}
