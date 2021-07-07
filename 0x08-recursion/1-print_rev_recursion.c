#include "holberton.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: Char pointer
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
