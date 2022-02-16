#include "main.h"
/**
 * *cap_string - check the code
 * @s: First variable.
 * Return: all words capitalized.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((s[i] >= 'a' && s[i] <= 'z'))
				s[i] = s[i] - 32;
		continue;
		}
	if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
	    s[i] == ':' || s[i] == '.' || s[i] == '?' || s[i] == '!' ||
	    s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
	    s[i] == '}')
	{
		if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
