#include "main.h"
/**
 * *_strchr - locates a character in a string.
 * @s: pointer to s, where is the string.
 * @c: variable, character we want to locate.
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return ('\0');
	while (*s != c && *s != '\0')
		s++;
	if (c != '\0' && *s == '\0')
		return ('\0');
	else
		return (s);
}
