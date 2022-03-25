#include "main.h"
/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 * @n: Pointer to a number
 * @index: Position of a string
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
