#include "main.h"
/**
 * print_triangle - Entry point
 * @size: First variable.
 */
void print_triangle(int size)
{
int l;
int a;
if (size <= 0)
{
_putchar('\n');
}
for (l = 1; l <= size; l++)
{
for (a = 1; a <= (size - l); a++)
{
_putchar(' ');
}
for (a = 1; a <= l; a++)
{
_putchar('#');
}
_putchar('\n');
}
}
