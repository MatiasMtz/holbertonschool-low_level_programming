#include "main.h"
/**
 * *_strncat - check the code
 * @dest:  Pointers to src
 * @src: pointer to a variable.
 * @n: First variable.
 * Return: Retorno
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int length = _strlen(dest);

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			dest[length + i] = src[i];
		}
		else
		{
			break;
		}
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
