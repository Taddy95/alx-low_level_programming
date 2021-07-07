#include "holberton.h"

/**
 * sqrt_check - check the square root of c
 * @g: int guess
 * @c: int to find square root of
 * Return: return -1 or square root of c.
 */
int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));

}

/**
 * _sqrt_recursion - eturns the natural square root of a number
 *
 * @n: int
 * Return: return -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
