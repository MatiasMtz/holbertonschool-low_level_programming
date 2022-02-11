#include "main.h"

/**
 * print_rev - check the code
 * @s: pointer to the variable.
 */
void print_rev(char *s)
{
	int i;
	int rev2;
	int reverse = 0;

	for (i = 0; s[i] != '0'; i++)
	{
		rev2 = i % 10;
		reverse = reverse * 10 + rev2;
		i /= 10;
	}
	_putchar(reverse);
	_putchar('\n');
}
