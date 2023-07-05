#include "main.h"
/**
  *is_palindrome - starting point
  *@s: pointer
  *Return: 1 or 0
  */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		if (*s <= 'a' && *s >= 'z')
		{
			return (0);
		}
		if (*s <= 'A' && *s >= 'Z')
		{
			return (0);
		}
		else
		{
			return (1);
		}
		return (0);
	}
	return (1);
}
