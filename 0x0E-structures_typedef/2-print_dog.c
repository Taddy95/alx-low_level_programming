#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Fuction that Prints
 * @d: Structure pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Name: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->owner);
		}
	}
}
