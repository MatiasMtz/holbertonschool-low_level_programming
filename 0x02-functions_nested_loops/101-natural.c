#include <stdio.h>

/**
* main - prints out the sum of all multiples of 3 and 5 below 1024
*
* Return: no error
*/
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
