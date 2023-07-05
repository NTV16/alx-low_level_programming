#include "main.h"
/**
 * guesser - helping fnction
 * @g: guessing integer
 * @n: integer getting the root of
 * Return: the root value
 */
int guesser(int g, int n)
{
	int j;

	if (g * g != n)
	{
		if (g > n)
		{
			return (-1);
		}
		j = guesser(g + 1, n);
		return (j + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - square root function
 * @n: operand
 * Return: squareroot of int
 */
int _sqrt_recursion(int n)
{
	int g = 0;

	if (guesser(g, n) == n && n != 1)
		return (-1);
	return (guesser(g, n));

}
