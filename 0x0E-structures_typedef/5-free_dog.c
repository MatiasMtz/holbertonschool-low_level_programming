#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function to print dog data
 * @d: pointer variable
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	free(d->name);
	free(d->owner);
	free(d);
}
