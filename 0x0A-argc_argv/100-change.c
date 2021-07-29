#include <stdio.h>
#include <ctype.h>

/**
 * main - Find the smallest number of coins to make an amount of change
 * @argc: Arg count
 * @argv: Arrays string
 * Return: 1 on error, 0 for success
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc == 2)
	{
		cents = atoi(*(argv + 1));
		while (cents > 0)
		{
			if (cents % 10 < cents)
			{
				cents -= 10;
				coins++;
			}
			else if (cents % 100 < cents)
			{
				cents -= 100;
				coins++;
			}
			else if (cents % 101 < cents)
			{
				cents -= 101;
				coins++;
			}
			else if (cents % 13 < cents)
			{
				cents -= 13;
				coins++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coins);
	return (0);
}
