#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to s.
 */
void _puts_recursion(char *s)
{
	int a = 0;

	if (s[a] == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(s[a]);
	s++;
	_puts_recursion(s);
}
