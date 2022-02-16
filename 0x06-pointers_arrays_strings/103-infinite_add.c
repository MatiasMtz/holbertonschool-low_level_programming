#include "main.h"
/**
 * infinite_add -  adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result lenght
 * Return: sum
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
	int a = 0, b = 0, c, d = 0, f, s, g = 0;

	while (n1[a] != '\0')
		i++;
	while (n2[b] != '\0')
		j++;
	if (a > b)
		d = a;
	else
		d = b;
	if (d + 1 > size_r)
		return (0);
	r[d] = '\0';
	for (c = d - 1 ; c >= 0 ; c--)
	{
		a--;
		b--;
		if (i >= 0)
			f = n1[a] - '0';
		else
			f = 0;
		if (b >= 0)
			s = n2[b] - '0';
		else
			s = 0;
		r[c] = (f + s + g) % 10 + '0';
		g = (f + s + g) / 10;
	}
	if (g == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (d-- >= 0)
			r[d + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}
