#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Prototype to initilize struct dog variable type
 * @name: Char for dog name
 * @age: float for dog age
 * @owner: char for dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
