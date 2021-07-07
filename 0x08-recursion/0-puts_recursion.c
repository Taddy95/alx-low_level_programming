#include "holberton.h"

/**
 * _puts_recursion - Entry Point
 * @s: Prototype character
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
