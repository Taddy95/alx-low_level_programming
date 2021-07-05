#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: array to be printed
 * @size: size of a
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum = 0;

	for (i = 0; i < size; i++)
		sum += *(a + i * size + i);
	printf("%i, ", sum);
	sum = 0;
	for (j = 0; j < size; j++)
		sum += *(a + size * (j + 1) - (j + 1));
	printf("%i\n", sum);
}
