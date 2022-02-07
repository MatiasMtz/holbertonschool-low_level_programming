#include "main.h"
#include <stdio.h>
/**
 *print_last_digit - prints last digit.
 *@n: variable.
 *Putchar - writes a character to stdout.
 *Return: 0 if upper, 1 if lower.
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = n *(-1);
}
_putchar(n % 10 + '0');
return (n % 10);
}
