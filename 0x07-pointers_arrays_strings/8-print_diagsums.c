#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals.
 * @a: Pointer.
 * @size: size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int b = 0;
	int c = 0;
	int diagonal1 = 0;
	int diagonal2 = 0;

	for (b = 0; b < size; b++)
	{
		diagonal1 += a[b + (c * size)];
		c++;
	}
	b = size - 1;
	for (b = 0; b < size; b++)
	{
		diagonal2 += a[b + (c * size)];
		c++;
	}
	printf("%d,%d\n", diagonal1, diagonal2);
}
