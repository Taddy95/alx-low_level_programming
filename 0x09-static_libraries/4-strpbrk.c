#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: Char to check
 * @accept: cahr to look for
 * Return: Char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
				return (s + 1);
		}
	}
	return (0);
}
