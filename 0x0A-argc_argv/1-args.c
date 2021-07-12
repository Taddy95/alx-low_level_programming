#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry level.
 * @argc: Argument size.
 * @argv: Argument array.
 * Return: 0 Always.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
