#include"holberton.h"

/**
 *  _strstr - locating a substring
 *  @needle: Occurrence in a string
 *  @haystack: string to search
 *  return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
