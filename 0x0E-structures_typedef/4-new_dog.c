#include <stdlib.h>
#include <string.h>
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
	{
		free(Result);
		return (NULL);
	}
	if (name != NULL || owner != NULL || age != 0)
	{
		(*Result).name = strdup(name);
		(*Result).owner = strdup(owner);
		if ((*Result).name == NULL || (*Result).owner == NULL)
		{
			free((*Result).name);
			free((*Result).owner);
			free(Result);
			return (NULL);
		}
		(*Result).age = age;
		return (Result);
	}
	else
	{
		return (NULL);
	}
}
