#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - this is a function that duplicates a string
 *
 * @str: an input string to duplicate
 *
 * Return: NULL if str == NULL
 * @str
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	i++;

	copy = malloc(i * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		copy[j] = str[j];
	}

	return (copy);
}
