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

for (n = 0 ; n <= 9; n++)
{
for (l = 0 ; l <= 9 ; l++)
{
if ((n != l) && (n < l))
{
putchar(n % 10 + '0');
putchar(l % 10 + '0');
if (n != 8)
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
