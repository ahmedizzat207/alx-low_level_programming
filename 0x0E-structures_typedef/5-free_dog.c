#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - The function frees the dog function
 * @d: a pointer to a dog_t (aka: struct dog)
 */

void free_dog(dog_t *d)
{
	free(d);
}
