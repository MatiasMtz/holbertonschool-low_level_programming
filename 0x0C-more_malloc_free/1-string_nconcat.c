#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Multiplies two numbers.
 * @s1: Pointer to a first string
 * @s2: Pointer to a second string
 * @n: Variable
 * Return: Return
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int u = 0;
	unsigned int z = 0;
	unsigned int s;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s2[z] != '\0')
	{
		z++;
	}
	if (z <= n)
		n = z;
	while (s1[i] != '\0')
	{
		i++;
	}
	s3 = malloc((i + 1 + n) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	z = 0;
	for (s = 0; s < (i + n); s++)
	{
		if (s1[s] == '\0')
			u = 1;
		if (u == 0)
			s3[s] = s1[s];
		if (u == 1)
		{
			s3[s] = s2[z];
			z++;
		}
	}
	s3[n + i] = '\0';
	return (s3);
}
