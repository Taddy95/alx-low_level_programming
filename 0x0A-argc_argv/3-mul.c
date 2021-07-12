#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: Arg size.
 * @argv: Arrays string.
 * Return: if it doesnot receive two arguments,
 * print error follow by a new line, and return 1.
 */
int main(int argc, char *argv[])
{
	int multiply = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiply = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiply);
	}
	return (0);
}
