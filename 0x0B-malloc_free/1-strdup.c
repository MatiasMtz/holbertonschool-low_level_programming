#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - duplicates str in a newly space in memory.
 * @str: pointer to dest.
 * Return: str duplicated.
 */
char *_strdup(char *str)
{
	char *str2;
	int n = 0;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	n++;
	str2 = malloc(n * sizeof(char));
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < n; x++)
	{
		str2[x] = str[x];
	}
	return (str2);
}
