#include "main.h"

/**
 *print_alphabet(void)-prints alphabet in lower case
 *Description: printing the aphabet in lowercase
 * Return: Always 0.
 */
void  print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
