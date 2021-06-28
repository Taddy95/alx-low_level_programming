#include "holberton.h"

/**
 * _strlen - Entry point.
 * @s: Prototype int.
 * Return: interger.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		i++;
	}
	return (i);
}
