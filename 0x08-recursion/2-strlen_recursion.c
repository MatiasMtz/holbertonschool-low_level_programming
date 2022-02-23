#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to s.
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (s[length] == '\0')
	{
		return (length);
	}
	return (1 + _strlen_recursion(s + 1));
}
