#include "holberton.h"

/**
 * _memcpy - Fuction to copy
 * @dest: destination
 * @src: Source
 * @n: contetnt in byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
