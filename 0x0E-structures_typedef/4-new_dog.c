#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - The function creates a new dog.
 *
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog, NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, lname, lowner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL || !(name) || !(owner))
	{
		free(dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	dog->name = malloc(lname + 1);
	dog->owner = malloc(lowner + 1);

	if (!(dog->name) || !(dog->owner))
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; i < lowner; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
