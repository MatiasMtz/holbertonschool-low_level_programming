#include "main.h"
/**
 * string_toupper - check the code
 * @s:  Pointer to a
 * Return: return 0 if success.
 */
char *string_toupper(char *s)
{
	int i;
	int length = _strlen(s);

	for (i = 0; i < length; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
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
