#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - entry point
 * @s: string
 * @accept: bytes
 * Return: number to bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ret = 0;
	int i, foundChar;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			foundChar = 0;
			if (*s == accept[i])
			{
				ret++;
				foundChar = 1;
				break;
			}
		}
		if (!foundChar)
			break;
		s++;
	}
	return (ret);
}
