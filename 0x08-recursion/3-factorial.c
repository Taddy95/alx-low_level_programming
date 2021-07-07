#include "holberton.h"

/**
 * factorial - that returns the factorial of a given number
 * @n: int prototype
 * Return: return -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (!n)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
