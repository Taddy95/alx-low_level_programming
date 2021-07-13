#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to new space in memory, NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *s3, *empty;
	int i, length1, length2, j;

	empty = "";
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	i = length1 = length2 = 0;
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	length2++;
	s3 = malloc((length1 + length2) * sizeof(*s1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < length1)
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= length2)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}
