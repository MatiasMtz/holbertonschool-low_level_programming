#include <stdio.h>

/**
 * main - prints things
 *
 * Return: 0 success
 */
int main(void)
{
int n = 0, l = 0, first;
int x = 0, z = 1, second;
for (first = 0; first < 100; first++)
{
n = first / 10;
l = first % 10;
for (second = 0; second < 100; second++)
{
x = second / 10;
z = second % 10;
if (first != second && first < second)
{
putchar(n + '0');
putchar(l + '0');
putchar(' ');
putchar(x + '0');
putchar(z + '0');
if (first != 98 || second != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
