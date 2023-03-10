#include "main.h"

/**
 * _strlen_recursion - Returns the lemgth of a string.
 * @s: String to be calculated.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*S)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}

	return (len);
}
