#include "main.h"
/**
 * *rot13 - check the code
 * @s:  Pointer to a
 * Return: return s.
 */
char *rot13(char *s)
{
	int i = 0;
	int n;

	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		n = 0;
		while (n < 52)
		{
			if (s[i] == let[n])
			{
				s[i] = rot[n];
				break;
			}
			n++;
		}
		i++;
	}
	return (s);
}
