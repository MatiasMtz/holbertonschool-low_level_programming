#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Pritns strings
 * @separator: Spaces
 * @n: Number that passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list args;
	char *a;

	va_start(args, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (count = 0; count < n; count++)
	{
		a = va_arg(args, char *);
		if (a == NULL)
		{
			printf("(nil)");
		}
		if (a != NULL)
		{
			printf("%s", a);
		}
	if (count != (n - 1))
	{
		printf("%s", separator);
	}
	}
	printf("\n");
	va_end(args);
}
