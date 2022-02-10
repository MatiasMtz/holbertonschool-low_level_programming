#include <stdio.h>

/**
 * main - finds the largest prime factor of 612852475143
 *
 * Return: 0 if success.
 */
int main(void)
{
	long int i = 2;
	long int number = 612852475143;

	for (i = 2; i < number; i++)
	{
		if ((number % i) == 0)
		{
			number /= i;
			i--;
		}
	}

	printf("%ld\n", number);
	return (0);
}
