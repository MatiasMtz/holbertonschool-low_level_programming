#include "main.h"
/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: Number
 * @index: Index, starting from 0 of the bit
 * Return: The value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
