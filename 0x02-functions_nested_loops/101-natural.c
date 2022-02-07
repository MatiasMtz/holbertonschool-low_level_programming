#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5.
 * Return: if success.
 */
int main(void)
{
unsigned long int i, sum = 0;
for (i = 0 ; i <= 1023; i++)
{
if ((i % 5 == 0) || (i % 3 == 0))
{
sum = sum + i;
}
}
{
putchar(i);
putchar('\n');
return (0);
}
}
