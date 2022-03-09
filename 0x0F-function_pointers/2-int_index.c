#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an int
 * @array: pointer to the start of the array.
 * @size: array size.
 * @cmp: compares values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (size < 0)
	{
		return (-1);
	}
	while (n < size)
	{
		n++;
		if (cmp(array[n]) != 0)
		{
			return (n);
		}
	}
	return (-1);
}
