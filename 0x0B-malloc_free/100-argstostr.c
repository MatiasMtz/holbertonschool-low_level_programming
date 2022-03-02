#include <stdlib.h>
#include "main.h"
/**
 * *argstostr - concatenates all the arguments of your program..
 * @ac: argument count.
 * @av: argument vector.
 * Return: str.
 */
char *argstostr(int ac, char **av)
{
	int n;
	int length = 1;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return ('\0');
	}
	for (n = 0; n < ac; n++)
	{
		length += (_strlen(av[n]) + 1);
	}
	str = malloc((length + 1) * sizeof(char));
	str[0] = '\0';
	for (n = 0; n < ac; n++)
	{
		_strcat(str, av[n]);
	}
	_strcat(str, '\0');
	return (str);
	free(str);
}

#include "main.h"
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

#include "main.h"
/**
 * *_strcat - check the code
 * @dest:  Pointers to src
 * @src: pointer to a variable.
 * Return: Retorno
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;
	int i = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\n';
	return (dest);
}
