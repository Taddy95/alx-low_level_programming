#include <stdio.h>

/**
 * constructor - prints something before main
 *
 */
void __attribute__ ((constructor)) constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
