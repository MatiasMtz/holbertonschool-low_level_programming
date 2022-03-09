#include "function_pointers.h"
/**
 * print_name - function to print a name
 * @name: pointer to name
 * @f: calls a function with a string pointing to it first char.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
