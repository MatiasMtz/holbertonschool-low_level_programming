#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5.
 * Return: if success.
 */
int main(void)
{
int main(void)
{
int i, sum;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
}
