#include "main.h"
/**
  * swap_int - check the code
  * @a: pointer to a
  * @b: pointer to b
  */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
