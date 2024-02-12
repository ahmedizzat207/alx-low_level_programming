#include <stdio.h>
#include "dog.h"

/**
 * new_dog - The function creates a new dog
 * @name: a pointer to a character of the dog name
 * @age: a pointer to a float for the dog age
 * @owner: a pointer to a character of the dog owner
 *
 * Return: a pointer to a struct dog if succesful, and NULL if the function
 * fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t add;
	dog_t *Result;

	Result = &add;
	if (name != NULL)
		add.name = name;
	else
		return (NULL);
	if (age != 0)
		add.age = age;
	else
		return (NULL);
	if (owner != NULL)
		add.owner = owner;
	else
		return (NULL);
	return (Result);
}
