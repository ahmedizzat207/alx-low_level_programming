#ifndef DOG
#define DOG

/**
 * struct dog - a structure for the dog related information
 * @name: the name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 *
 * Description: the structure contain all the dog informaiton from it's name
 * to it's owner and it's age
 */

struct dog
{
	char *name, *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* #ifndef DOG.H */
