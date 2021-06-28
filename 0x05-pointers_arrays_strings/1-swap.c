#include "holberton.h"

/**
 * swap_int - Entry point.
 * @a: Prototype int.
 * @b: Prototype int.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
