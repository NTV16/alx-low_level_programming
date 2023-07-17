#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: Measured string
 *
 * Return: string length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - function that copies a string pointed to by src,
 *including the nullcharacter to dest
 * @dest: destination
 * @src: source
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 * @name: dog name operand
 * @age: dog age operand
 * @owner: dog owner operand
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *farben;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	farben = malloc(sizeof(dog_t));
	if (farben == NULL)
		return (NULL);

	farben->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (farben->name == NULL)
	{
		free(farben);
		return (NULL);
	}

	farben->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (farben->owner == NULL)
	{
		free(farben->name);
		free(farben);
		return (NULL);
	}
	farben->name = _strcopy(farben->name, name);
	farben->age = age;
	farben->owner = _strcopy(farben->owner, owner);

	return (farben);
}
