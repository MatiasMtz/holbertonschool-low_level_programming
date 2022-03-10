#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers followed by new line
 * @separator: spaces and commas
 * @n: Amount of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list args;

	if (separator == NULL)
	{
		return;
	}
	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(args, int));
	if (count != (n - 1))
	{
		printf("%s", separator);
	}
	}
	printf("\n");
	va_end(args);
}
