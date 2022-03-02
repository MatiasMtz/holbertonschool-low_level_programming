#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array
 * @size: size of the array
 * @c: specific char
 * Return: a pointer to the array or null.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *str;

	if (size == 0)
	{
		return ('\0');
	}
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return ('\0');
	}
	n = 0;
	while (n < size)
	{
		str[n] = c;
		n++;
	}
	return (str);
}
