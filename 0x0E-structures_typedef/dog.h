#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog
 * @name: name of dog
 * @age: name of dog
 * @owner: owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
