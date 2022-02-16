#include "main.h"
/**
 * *rot13 - check the code
 * @s:  Pointer to a
 * Return: return s.
 */
char *rot13(char *s)
{
	int i = 0;
	int n = 0;

	char let[] = "AaBbCcEeFfGgHhIiJjKkLlMm";
	char rot[] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";

	while (s[i] != '\0')
	{
		n = 0;
		while (let[n] != '\0')
		{
			if (s[i] == let[n])
			{
				s[i] = rot[n];
			}
			n++;
		}
		i++;
	}
	return (s);
}
