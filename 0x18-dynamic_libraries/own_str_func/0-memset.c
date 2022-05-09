#include "main.h"
/**
 * *_memset - fills the first n bytes of the memory area pointed to by s.
 * @s: pointer to s.
 * @b: constant byte.
 * @n: first bytes of memory to fill.
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
