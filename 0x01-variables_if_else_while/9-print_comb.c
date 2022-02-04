#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
n = 0;
do {
putchar(n % 10 + '0');
if (n != 9)
{
putchar(',');
putchar(' ');
}
n++;
} while (n < 10);
putchar('\n');
return (0);
}
