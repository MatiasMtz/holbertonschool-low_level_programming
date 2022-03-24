#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: converted number or 0 if b is NULL or there are chars in the string.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int aux = 1;
	int length = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[length] != '\0')
	{
		length++;
	}
	for (length = (length - 1); length >= 0; length--)
	{
		if (b[length] != 48 && b[length] != 49)
		{
			return (0);
		}
		number = number + ((b[length] - 48) * aux);
		aux = aux * 2;
	}
	return (number);
}
