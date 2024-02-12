#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize the dog structure variables
 * @d: a pointer to a sturct dog variable
 * @name: a pointer to a char
 * @age: a pointer to float
 * @owner: a pointer to char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = *name;
	(*d).owner = *owner;
	(*d).age = *age;
}
