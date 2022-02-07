#include "main.h"
/**
 * main - Entry point.
 * Putchar - writes a character to stdout.
 * Return: 0 if success.
 */
void print_alphabet_x10(void)
{
int a;
for (a = 0; a < 10; a++)
{
for (a = 'a' ; a <= 'z' ; a++)
_putchar(a);
}
_putchar('\n');
}
