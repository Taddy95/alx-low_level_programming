#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: concatenated string 1
 * @s2: concatenated string 2
 * @n: number of bytes of @s2 to be concatenated
 * Return: pointer to newly allocated space in memory with the
 * concatenated string (SUCCESS) or NULL if insufficient
 * memory was available (FAILURE)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr = malloc(sizeof(s1) + n + 1);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] && j < n; j++, i++)
		ptr[i] = s2[j];
	return (ptr);
}
