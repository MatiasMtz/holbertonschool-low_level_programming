#include <stdio.h>
#include <stdlib.h>
/**
 *main -finds and prints the sum of the even-valued terms
 *Return: 0 if success.
 */
int main(void)
{
int i = 1, n = 1, sum = 0;

while (i < 4000000)
{
i = i + n;
n = i - n;
if (i % 2 == 0)
sum += i;
}
{
printf("%d", sum);
printf("\n");
}
}
