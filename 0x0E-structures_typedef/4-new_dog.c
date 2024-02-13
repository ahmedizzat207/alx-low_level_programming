#include <stdlib.h>
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
	dog_t *Result;

	Result = malloc(sizeof(dog_t));
	if (Result == NULL)
		return (NULL);
	if ((*Result).name != NULL || (*Result).owner != NULL || (*Result).age != NULL)
	{
		(*Result).name = name;
		(*Result).owner = owner;
		(*Result).age = age;
		free(name);
		free(owner);
		free(age);
		return (Result);
	}
	else
	{
		return (NULL);
}
