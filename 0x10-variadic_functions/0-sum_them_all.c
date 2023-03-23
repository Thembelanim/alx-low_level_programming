#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum when given unknown amount of arguments
 * @n: integers to add
 * @i++: number to use
 * Return: sum of all of all its parameters,If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list ptr;

	va_start(ptr, n);

/**
 * comenting out - this code
 * if (n == 0)
 * return (0);
 * va_start(ptr, n);
 */

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
