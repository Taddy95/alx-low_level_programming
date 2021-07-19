#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - A struct
 * @name: name of dog in char;
 * @age: age of dog in float;
 * @owner: Dogs owner in char;
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
