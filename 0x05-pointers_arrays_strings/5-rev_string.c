#include "main.h"
int _putchar(char c);
/**
 * rev_string - check the code
 * _strlen - count characters
 * @s: pointer to a variable.
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int a;
	int b = 0;
	char string[] = "";

	b = length - 1;
	for (a = 0 ; a < b; a++)
	{
		string[0] = s[b];
		s[b] = s[a];
		s[a] = string[0];
		b--;
	}
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
