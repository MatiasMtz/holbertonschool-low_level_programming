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
	for (a = 0 ; a < j; b++)
	{
		string[0] = s[b];
		s[b] = s[a];
		s[a] = string[0];
		i--;
	}
}

/**
 * _strlen - gives the num of characters.
 * @s: pointer to s.
 * Return: length if success
 */
int _strlen(char *s)
{
	int cont = 0;
	char l = '0';
	if (*s == '\0')
		return (0);
	while (l != '\0')
	{
		cont++;
		l = *(s + cont);
	}
	return (cont);
}
