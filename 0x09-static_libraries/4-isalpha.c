#include "holberton.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: Alphabetic character
 * Return: 1 (Success) OR 0 (Failure)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
