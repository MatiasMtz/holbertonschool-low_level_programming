#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Multiplies two numbers.
 * @s1: Pointer to a first string
 * @s2: Pointer to a second string
 * @n: Variable
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
			return(NULL);
		}
		free(ptr);
		return(s);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return(NULL);
	}
	n = malloc(new_size);
	if (n == NULL)
	{
		free(ptr);
		return(NULL);
	}
	s = ptr;
	while (i < old_size)
	{
		n[i] = s[i];
		i++;
	}
	free(ptr);
	return(n);
}
