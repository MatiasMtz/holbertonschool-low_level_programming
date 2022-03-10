#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Pritns numbers
 * @separator: Spaces
 * @n: Number that passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
	if (i != (n - 1))
	{
		printf("%s", separator);
	}
	}
	printf("\n");
	va_end(args);
}
