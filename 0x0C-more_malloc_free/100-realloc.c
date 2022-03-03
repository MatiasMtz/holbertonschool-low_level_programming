#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated. Calls malloc(old_size).
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size: new size, in bytes of the new memory block.
 * Return: Return
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *s;
	char *n;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
		{
			free(s);
			return (NULL);
		}
		free(ptr);
		return (s);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	n = malloc(new_size);
	if (n == NULL)
	{
		free(ptr);
		return (NULL);
	}
	s = ptr;
	while (i < old_size)
	{
		n[i] = s[i];
		i++;
	}
	free(ptr);
	return (n);
}
