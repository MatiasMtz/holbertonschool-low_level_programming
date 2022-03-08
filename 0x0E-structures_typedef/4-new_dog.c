#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *nmeew_dog - function to print second dog data
 * @name: second dog name
 * @age: second dog age
 * @owner: second dog owner
 * Return: New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mem;
	int n = 0;
	int i = 0;

	mem = malloc(sizeof(dog_t));
	if (mem == NULL)
		return (NULL);
	while (name[n] != '\0')
		n++;
	while (owner[i] != '\0')
		i++;
	mem->name = malloc((n + 1) * sizeof(char));
	mem->owner = malloc((i + 1) * sizeof(char));
	if (mem->name == NULL || mem->owner == NULL)
	{
		free(mem->name);
		free(mem->owner);
		free(mem);
		return (NULL);
	}
	n = 0;
	i = 0;
	while (name[n] != '\0')
	{
		mem->name[n] = name[n];
		n++;
	}
	while (owner[i] != '\0')
	{
		mem->owner[i] = owner[i];
		i++;
	}
	mem->name[n] = '\0';
	mem->owner[i] = '\0';
	mem->age = age;
	return (mem);
}
