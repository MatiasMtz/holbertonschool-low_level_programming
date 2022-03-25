#include "main.h"
/**
 * flip_bits - Function that returns the number of bits you would need to flip
 * @n: Numbers
 * @m: Other number
 * Return: The number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned long int i = 0;

	while (x > 0)
	{
		i += (x & 1);
		x >>= 1;
	}
	return (i);
}
