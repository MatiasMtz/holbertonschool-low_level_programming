#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: variable.
 *
 */
void print_to_98(int n)
{
int x;
x = n;
if (n < 98)
{
for (; n <= 98; n++)
{
if (n != 98)
{
printf("%i", n);
printf(", ");
}
else
printf("98");
}
n = 0;
}
if (x >= 98)
{
for (; x >= 98; x--)
{
if (x != 98)
{
printf("%i", x);
printf(", ");
}
else
printf("98");
}
}
printf("\n");
}
