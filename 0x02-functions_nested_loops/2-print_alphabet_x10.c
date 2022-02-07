#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet 10times.
 * Putchar - writes a character to stdout.
 */
void print_alphabet_x10(void)
{
int i;
char a;
for (i = 0 ; i < 10 ; i++)
{
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
