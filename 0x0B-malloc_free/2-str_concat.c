#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - concatenates s1 and s2 and NULL.
 * @s1: string 1.
 * @s2: string 2.
 * Return: str duplicated.
 */
char *str_concat(char *s1, char *s2)
{
	int str1;
	int str2;
	int str3;
	int i = 0;
	char *a;

	str1 = _strlen(s1);
	str2 = _strlen(s2);
	str3 = str1 + str2 + 1;
	a = malloc(str3);
	while (*s1 != '\0')
	{
		a[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		a[i] = *s2;
		s2++;
		i++;
	}
	a[i] = '\0';
	return (a);
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
