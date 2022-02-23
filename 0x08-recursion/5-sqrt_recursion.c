#include "main.h"
/**
 * square_root - calculates the square root of a number.
 * @n: number which we will find the square root.
 * @b: natural square root of a number
 * Return: square root.
 */
int square_root(int n, int b)
{
	if ((b * b) == n)
		return (b);
	if ((b * b) > n)
		return (-1);
	return (square_root(n, (b + 1)));
}

/**
 * _sqrt_recursion - returns the natural square root of a number..
 * @n: number which we will find the square root.
 * Return: returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 0));
}
