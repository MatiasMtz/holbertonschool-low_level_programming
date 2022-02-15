#include "main.h"
/**
 * *leet - check the code
 * @s:  Pointer to a
 * Return: return s.
 */
char *leet(char *s)
{
	int i = 0;
	int n = 0;

	char let[] = "AaEeOoTtLl";
	char num[] = "4433007711";

	while (s[i] != '\0')
	{
		n = 0;
		while (let[n] != '\0')
		{
			if (s[i] == let[n])
			{
				s[i] = num[n];
			}
			n++;
		}
		i++;
	}
	return (s);
}
