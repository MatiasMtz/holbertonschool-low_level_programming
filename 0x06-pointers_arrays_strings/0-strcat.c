#include "main.h"
/**
 * *_strcat - check the code
 * @dest:  Pointers to src
 * @src: pointer to a variable.
 * Return: Retorno
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n = 0;
	int length = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
		dest[length + i] = '\0';
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
