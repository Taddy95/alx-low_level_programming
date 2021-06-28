#include "holberton.h"

/**
 * rev_string - Entry point.
 * @s: Prototype int.
 * Return: void.
 */
void rev_string(char *s)
{
	int i, len = 0;

	while (*s++ != '\0')
		len++;
	s -= len + 1;
	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
