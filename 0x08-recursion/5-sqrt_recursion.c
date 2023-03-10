#include "main.h"

/**
 * sqrt1 - evaluating from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error return(-1).
 */
int sqrt1(int a, int b)
{
	if (b * b == a)
		return (b);

	else if (b * b > a)
		return (-1);

	return (sqrt1(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error return(-1).
 */
int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}
