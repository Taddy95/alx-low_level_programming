#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function to print a name
 * @name: Name to print(char)
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
