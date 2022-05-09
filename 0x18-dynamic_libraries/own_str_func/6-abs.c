#include "main.h"
/**
 *_abs - Return absolute value of given integers.
 *@n: Variable.
 *Putchar - writes a character to stdout.
 *Return: 0 if upper, 1 if lower.
 */
int _abs(int n)
{
if (n < 0)
{
n = -n;
}
return (n);
}
