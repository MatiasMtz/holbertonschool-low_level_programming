#include "dog.h"
#include <stdio.h>
/**
 * free_dog - function to print dog data
 * @d: pointer variable
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
}
