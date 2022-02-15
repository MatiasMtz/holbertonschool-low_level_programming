#include "main.h"
/**
 * reverse_array - check the code
 * @a:  Pointer to a
 * @n: pointer.
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

		for (i = 0; i < n / 2; i++)
		{
			x = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = x;
		}
}
