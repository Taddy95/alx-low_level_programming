#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of
 * chars, and initializes it with a specific char.
 * @c: Char
 * @size: the size of the memory to print
 * Return: Null if size is 0, pointer to the array or null if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	i = 0;

	if (s != 0)
	{
		s = malloc(size * sizeof(char));
	}
	else
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
