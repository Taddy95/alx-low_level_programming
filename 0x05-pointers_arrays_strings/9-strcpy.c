#include "holberton.h"

/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: Prototype int.
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{
	register char *dest_tmp = dest;

	while ((*dest_tmp++ = *src++))
		continue;
	*dest_tmp = '\0';
	return (dest);
}
