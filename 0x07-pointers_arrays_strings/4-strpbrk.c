#include "main.h"
/**
 * *_strspn - locates a character in a string.
 * @s: pointer to s, where is the string.
 * @accept: bytes we want to locate.
 * Return: 0 if success.
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
