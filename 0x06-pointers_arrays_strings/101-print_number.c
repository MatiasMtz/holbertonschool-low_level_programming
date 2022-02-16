#include "main.h"
/**
 * print_number -  prints n elements of an array of integers
 * @n: variable.
 */
void print_number(int n)
{
	unsigned int numbers;
	unsigned int positive;
	unsigned int count;

	if (n < 0)
	{
		_putchar('-');
		numbers = n * -1;
	}
	else
	{
		numbers = n;
	}

	positive = numbers;
	count = 1;

	while (positive > 9)
	{
		positive /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((numbers / count) % 10) + '0');
	}
}
