#include "dog.h"
#include "stdlib.h"
/**
 * init_dog - initialize dog
 * @d: pointer variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	d->name = name;
	d->age = age;
	d->owner = owner;
}
