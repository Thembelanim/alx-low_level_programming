#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: The return value of the factorilal.
 *
 * Return: if n > 0 return(1) the factorial of n
 * If n < 0 - return(-1) to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
