#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function to print dog data
 * @d: pointer variable
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)%s\n", d->name);
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)%s\n", d->owner);
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
