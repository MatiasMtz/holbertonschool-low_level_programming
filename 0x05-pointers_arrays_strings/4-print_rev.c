#include "main.h"

/**
 * print_rev - check the code
 * _strlen - Count characters.
 * @s: pointer to a variable.
 */
void print_rev(char *s)
{
	int a;

	for (a = _strlen(s) - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
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
