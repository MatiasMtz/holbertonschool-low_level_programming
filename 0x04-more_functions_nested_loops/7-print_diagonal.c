#include "main.h"

/**
 * print_diagonal - check the code
 * @n: variable.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int x;

	for (i = 1; i <= n; i++)
		{
			for (x = 1; x < i; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (i != n)
			_putchar('\n');
		}
		_putchar('\n');
}
