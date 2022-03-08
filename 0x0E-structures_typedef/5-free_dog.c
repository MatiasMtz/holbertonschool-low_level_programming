#include "dog.h"
#include <stdio.h>
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
	free(d->age);
	free(d->owner);
}