#include "main.h"
/**
 * prime_numbers - calculates if n is a prime number.
 * @n: number to check if its prime number.
 * @b: is possible to factorize n?
 * Return: prime number calculator.
 */
int prime_numbers(int n, int b)
{
	if ((b * b) > n)
	{
		return (1);
	}
	if (b * b == n)
	{
		return (0);
	}
	return (prime_numbers(n, (b + 1)));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise, return 0.
 * @n: number to check if its prime number.
 *Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	return (prime_numbers(n, 0));
}
