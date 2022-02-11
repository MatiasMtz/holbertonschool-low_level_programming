#include "main.h"
/**
  * main - check the code
  *
  */
void swap_int(int *a, int *b)
{
	int *p = a;
	int *point = b;

	*p = b;
	*point = a;
}
