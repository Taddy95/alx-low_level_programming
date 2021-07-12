#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: Arg size.
 * @argv: Arrays string.
 * Return: 1 and print error followed by a new line
 * if one of the number contains symbols that are not digits
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;
	int count;

	sum = 0;
	i = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			count = atoi(argv[i]);

			if (!count && *argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += count;
			}
		}
	}
		printf("%d\n", sum);
		return (0);
}
