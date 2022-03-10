#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_string - Pritns strings
 * @args: Arguments
  */
void print_string(va_list args)
{
	char *a;

	a = va_arg(args, char *);
	if (a == NULL)
	{
		printf("(nil)");
	}
	printf("%s", a);
}
/**
 * print_number - Print number
 * @args: Arguments.
 */
void print_number(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
* print_char - Print character
* @args: Arguments.
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
* print_float - Print number
* @args: Arguments.
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - Print all arguments
 * @format: Format of arguments
 */
void print_all(const char * const format, ...)
{
	print_t print[] = {
		{"s", print_string},
		{"i", print_number},
		{"c", print_char},
		{"f", print_float},
		{NULL, NULL},
	};

	int count = 0;
	int j = 0;
	char *space;
	va_list arg;

	va_start(arg, format);

	while (format != NULL && format[j] != '\0')
	{
		count = 0;
		while (count < 4)
		{
			if (print[count].print[0] == format[j])
			{
				printf("%s", separator);
				print[count].f(arg);
				separator = ", ";
			}
			count++;
		}
		j++;
	}
	printf("\n");
	va_end(arg);
}
