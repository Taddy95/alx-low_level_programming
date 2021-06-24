#include "holberton.h"

/**
 * more_numbers - Entry point
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int count = 0;

	while (count <= 9)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		count++;
		_putchar('\n');
	}
}
