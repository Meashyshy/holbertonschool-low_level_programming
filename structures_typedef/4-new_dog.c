#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct User *new_dog;
	new_dog = malloc(sizeof(dog_t));

	if (user == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
}
