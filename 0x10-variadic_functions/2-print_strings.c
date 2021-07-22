#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 * @separator:  string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;
	char *c;
	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(my_list, char*);
		if (c != NULL)
		{
			printf("%s", c);
		}
		else
		{
			printf("(nil)");
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		putchar('\n');
		va_end(my_list);
}
