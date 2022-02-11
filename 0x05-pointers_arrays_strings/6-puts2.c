#include "main.h"

/**
 * puts2 - check the code
 * @str: pinter to a variable
 */
void puts2(char *str)
{
	int a;
	int b = _strlen(str) - 1;

	for (a = 0; a <= b; a = a + 2)
	{
		_putchar(str[a]);
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
