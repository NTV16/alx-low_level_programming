#include "main.h"
/**
 * guesser - helping function
 * @a: operand
 * @n: tested operand
 * Return: integer
 */
int guesser(int a, int n)
{
	if (n % a == 0 && n != a)
		return (0);
	if (n % a != 0 && a < n)
		return (guesser(a + 1, n));
	return (1);
}
/**
 * is_prime_number - second function
 * @n: operand
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n < 2)
		return (0);
	return (guesser(a, n));
}
