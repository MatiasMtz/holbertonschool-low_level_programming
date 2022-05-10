#include "main.h"
/**
 * *_strspn - locates a character in a string.
 * @s: pointer to s, where is the string.
 * @accept: bytes we want to locate.
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;
	unsigned int flag;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		flag = 1;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	return (a);
}
