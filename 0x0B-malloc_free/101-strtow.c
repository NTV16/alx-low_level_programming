#include <stdlib.h>
#include "main.h"

/**
 * count_word - helping function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int wort, t, v;

	wort = 0;
	v = 0;

	for (t = 0; s[t] != '\0'; t++)
	{
		if (s[t] == ' ')
			wort = 0;
		else if (wort == 0)
		{
			wort = 1;
			v++;
		}
	}

	return (v);
}
/**
 * **strtow - function that splits a
 *string into words.
 * @str: string to split
 *
 * Return: pointer (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **vortex, *gen;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	vortex = (char **) malloc(sizeof(char *) * (words + 1));
	if (vortex == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				gen = (char *) malloc(sizeof(char) * (c + 1));
				if (gen == NULL)
					return (NULL);
				while (start < end)
					*gen++ = str[start++];
				*gen = '\0';
				vortex[k] = gen - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	vortex[k] = NULL;

	return (vortex);
}
