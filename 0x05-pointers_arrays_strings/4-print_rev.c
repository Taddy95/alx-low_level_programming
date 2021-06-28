#include "holberton.h"

/**
 * print_rev - Entry point.
 * @s: prototype int.
 * Return: void.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
