#include "main.h"
/**
 * *_strstr - finds the first occurrence of the substring needle in the string.
 * @haystack: string.
 * @needle: substring.
 * Return: 0 if success.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
