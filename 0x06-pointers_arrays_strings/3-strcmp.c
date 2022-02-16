#include "main.h"
/**
 * *_strcmp - check the code
 * @s1:  Pointer.
 * @s2: pointer.
 * Return: success or fail.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int n = 0;
	int x = 0;

	while (s1[n] != '\0')
	{
		n++;
	}
	while (s2[x] != '\0')
	{
		x++;
	}
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (n > x)
	{
		return (s1[x]);
	}
	else if (x < n)
	{
		return (s2[n] * -1);
	}
	return (0);
}
