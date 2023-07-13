#include "main.h"
#include <stdlib.h>

/**
  *string_nconcat -function that concatenates two strings.
  *@s1: destination string
  *@s2: source string
  *@n: number of s2 bytes to be added to s1
  *Return: a pointer to the new string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int length = n, index;

	if (s1 == NULL || s2 == NULL)
		return ("");
	for (index = 0; s1[index]; index++)
		length++;
	t = malloc(sizeof(char) * (length + 1));
	if (t == NULL)
		return (NULL);

	length = 0;
	for (index = 0; s1[index]; index++)
		t[length++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		t[length++] = s2[index];
	t[length] = '\0';
	return (t);
}
