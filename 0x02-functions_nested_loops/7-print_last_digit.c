#include "main.h"
/**
 *print_last_digit - last digit.
 *@c: variable.
 *Putchar - writes a character to stdout.
 *Return: 0 if upper, 1 if lower.
 */
int print_last_digit(int c)
{
int n;
if (c == -2147483648)
c = 88;
if (c < 0)
{
c = -c;
}
n = c % 10;
_putchar(n % 10 + '0');
return (n);
}
