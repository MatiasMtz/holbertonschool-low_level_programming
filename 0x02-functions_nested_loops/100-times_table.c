#include "main.h"
/**
 * print_times_table - prints times tables.
 * @n: variable.
 *
 */
void print_times_table(int n)
{
	int x = 0, y, z;
if (n > 15 || n < 0)
	return;
while (x <= n)
{
for (y = 0 ; y <= n ; y++)
{
	z = x * y;
	if (z > 99)
	{
		_putchar(z / 100 + '0');
		_putchar((z / 10 % 10) + '0');
		_putchar(z % 10 + '0');
	}
	else if (z > 9)
	{
		_putchar(' ');
		_putchar(z / 10 + '0');
		_putchar(z % 10 + '0');
	}
	else if (y != 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(z + '0');
	}
	else
		_putchar(z + '0');
	if (y != n)
	{
		_putchar(',');
		_putchar(' ');
	}
}
_putchar('\n');
x++;
}
}
