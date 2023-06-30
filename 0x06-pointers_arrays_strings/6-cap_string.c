#include "main.h"

/**
  *cap_string - starting point
  *@str: pointer
  *Description: Capitalizing all words
  *of a string
  *Return: char
  */
char *cap_string(char *str)
{
	int ntv = 0;

	while (str[ntv])
	{
		while (!(str[ntv] >= 'a' && str[ntv] <= 'z'))

			ntv++;

		if (str[ntv - 1] == ' ' ||
				str[ntv - 1] == '\t' ||
				str[ntv - 1] == '\n' ||
				str[ntv - 1] == ',' ||
				str[ntv - 1] == ';' ||
				str[ntv - 1] == '.' ||
				str[ntv - 1] == '!' ||
				str[ntv - 1] == '?' ||
				str[ntv - 1] == '"' ||
				str[ntv - 1] == '(' ||
				str[ntv - 1] == ')' ||
				str[ntv - 1] == '{' ||
				str[ntv - 1] == '}' ||
				ntv == 0)
			str[ntv] -= 32;
		ntv++;
	}
	return (str);
}
