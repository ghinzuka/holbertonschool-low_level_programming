#include "dog.h"

/**
 * free_dog - free the structure
 *
 * @d: dog to be free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
