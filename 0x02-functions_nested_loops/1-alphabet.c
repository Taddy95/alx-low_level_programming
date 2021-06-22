#include "holberton.h"

/**
 * print_alphabet - check the code for ALX School students
 *
 * Description: print_alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; 'a' <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (void);
}
