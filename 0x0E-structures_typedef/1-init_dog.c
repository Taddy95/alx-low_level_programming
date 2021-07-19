#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize the struct dog
 * @d: struct pointer
 * @name: Name of dog in cahr
 * @age: Age of dog in float
 * @owner: Dogs owner in char
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
