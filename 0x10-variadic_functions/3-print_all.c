#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_string - Pritns strings
 * @args: Arguments
 * 
  */
void print_string(char *space, va_list args)
{
	char *a;

	a = va_arg(args, char *);
	if (a == NULL)
	{
		printf("(nil)");
	}
	printf("%s%s", space, a);
}
/**
 * print_number - Print number
 * @args: Arguments.
 */
void print_number(char *space, va_list args)
{
	printf("%s%i", space, va_arg(args, int));
}
/**
* print_char - Print character
* @args: Arguments.
*/
void print_char(char *space, va_list args)
{
	printf("%s%c", space, va_arg(args, int));
}
/**
* print_float - Print number
* @args: Arguments.
*/
void print_float(char *space, va_list args)
{
	printf("%s%f", space, va_arg(args, double));
}

/**
 * print_all - Print all arguments
 * @format: Format of arguments
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	print_t print[] = {
		{"s", print_string},
		{"i", print_number},
		{"c", print_char},
		{"f", print_float},
		{NULL, NULL},
	};

	int count = 0;
	int j = 0;
	char *space = "";
	
	va_start(arg, format);
	while (format != NULL && format[j] != '\0')
	{
		count = 0;
		while (count < 4)
		{
			if (print[count].print[0] == format[j])
			{
				print[count].f(space, arg);
				space = ", ";
			}
			count++;
		}
		j++;
	}
	va_end(arg);
	printf("\n");
}
