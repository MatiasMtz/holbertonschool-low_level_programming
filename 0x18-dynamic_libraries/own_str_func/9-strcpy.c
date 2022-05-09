#include "main.h"
/**
 * *_strcpy -  prints n elements of an array of integers
 * @dest: pointer to dest.
 * @src: pointer to src.
 * Return: return value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i = 0;
	char x;

	for (i = 0; i <= length; i++)
	{
		x = *(src + i);
		*(dest + i) = x;
	}
	return (dest);
}

/**
 * _strlen - check the code
 * @s: pointer to a
 * Return: length if success.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
