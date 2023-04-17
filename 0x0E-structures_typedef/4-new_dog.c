#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - The function returns the length of the string
 *
 * @s: source string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

/**
 * *_strcpy - The function copies the content of src to dest
 *
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

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
	char *new_name, *new_owner;
	int len_name, len_owner;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	len_name = _strlen(name);
	new_name = malloc((len_name + 1) * sizeof(char));
	if (new_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(new_name, name);

	len_owner = _strlen(owner);
        new_owner = malloc((len_owner + 1) * sizeof(char));
        if (new_owner == NULL)
        {
                free(dog);
                return (NULL);
        }
        _strcpy(new_owner, owner);

	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;

	return (dog);
}
