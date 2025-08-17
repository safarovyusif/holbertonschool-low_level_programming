#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees all memory of a dog_t struct
 * @d: pointer to dog_t to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
