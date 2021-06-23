#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: is the int that will use for the argument of the function
 * Return: integer value
 */
int print_last_digit(int c)
{
	int last_digit;

	if (c < 0)
	{
		last_digit = (c % 10) * -1;
	}
	else
	{
		last_digit = c % 10;	
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
