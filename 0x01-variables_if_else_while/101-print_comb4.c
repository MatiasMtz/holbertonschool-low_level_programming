#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int l;
int x;
for (n = 0 ; n <= 9; n++)
{
for (l = 0 ; l <= 9 ; l++)
{
for (x = 0 ; x <= 9 ; x++)
{
if ((n != l) && (n < l) && (l < x) && (n != x) && (l != x))
{
putchar(n % 10 + '0');
putchar(l % 10 + '0');
putchar(x % 10 + '0');
if (n != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
