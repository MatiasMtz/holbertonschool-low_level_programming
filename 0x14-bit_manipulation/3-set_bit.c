#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the bit.
 * @index: Index, starting from 0 of the bit.
 * Return: 1 if it worked or -1 if an error ocurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
