#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - The function frees dogs
 *
 * @d: dug struct to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
