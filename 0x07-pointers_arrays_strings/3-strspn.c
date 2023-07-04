#include "main.h"

/**
  * _strspn - starting point
  *@s: pointer
  *@accept: pointer 2
  *Return: unsigned int
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int tmp;

	for (tmp = 0; (tmp = accept && tmp != '\0'); tmp++)
	{
		*s = *accept;
		return (*s);
	}
	return (tmp);
}
