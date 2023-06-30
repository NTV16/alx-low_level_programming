#include "main.h"

/**
  *leet - starting point
  *@b: pointer
  *Return: char
  */
char *leet(char *b)
{
	char *leet_chars = "AEOTL";
	char *leet_nums = "43071";
	int x, y;

	for (x = 0; b[x] != '\0'; x++)
	{
		for (y = 0; leet_chars[y] != '\0'; y++)
		{
			if (b[x] == leet_chars[y] || b[x] == leet_chars[y] + 32)
			{
				b[x] = leet_nums[y];

				break;
			}
		}
	}

	return (b);
}
