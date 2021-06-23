#include "holberton.h"

/**
 * times_table - that prints the 9 times table
 * Description: Times table
 * Return: void
 */
void times_table(void)
{
	int row = 0;
	int column = 0;
	int result;


	for (row = 0; row <= 9; row++)
	{
		_putchar(46);
		for (column = 1; column <= 9; column++)
		{
			result = row * column;
			_putchar(44);
			_putchar(32);
			if (result <= 9)
			{
				_putchar(32);
				_putchar(result + 48);
			}
			else
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
		}
	_putchar('\n');
	}
}
