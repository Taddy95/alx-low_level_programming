#include "holberton.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: string to be crypte
 * Return: pointer to s
 * Update V 1.0 : In this new code , i changed 2 arrays with 2 pointe
 */
char *leet(char *s)
{
	char *m = "aeotl";
	char *M = "AEOTL";
	int x[] = {'4', '3', '0', '7', '1'};
	int i;
	char *p = s;

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == *(m + i) || *s == *(M + i))
				*s = x[i];
		}
		s++;
	}
	return (p);
}
