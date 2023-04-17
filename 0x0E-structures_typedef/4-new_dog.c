#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - The function creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
