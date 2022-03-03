#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - function that allocates memory.
 * @b: Memory we want to allocate.
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);
		if (a == NULL)
		{
			exit(98);
		}
	return (a);
}
