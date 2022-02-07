#include "main.h"
/**
 * print_alphabet - Prints letters to the output.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int a = 97;
while (a < 123)
{
_putchar(a);
a++;
}
_putchar('\n');
}
