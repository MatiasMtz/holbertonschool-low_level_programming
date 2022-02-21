#include "main.h"
/**
 * *_memcpy - fills the first n bytes of the memory area pointed to by s.
 * @dest: destination of the bytes.
 * @src: source of the bytes to copy.
 * @n: bytes of memory to fill.
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
