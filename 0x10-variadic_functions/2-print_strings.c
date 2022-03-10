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
	unsigned int i;
	va_list args;
	char *a;

	va_start(args, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		a = va_arg(args, char *);
		if (a == NULL)
		{
			printf("(nil)");
		}
	printf("%s", a);
	if (i != (n - 1))
	{
		printf("%s", separator);
	}
	}
	printf("\n");
	va_end(args);
}
