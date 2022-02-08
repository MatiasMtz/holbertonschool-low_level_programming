#include "main.h"
#include <stdio.h>
/**
* main - prints the first 98 fibonacci numbers, starting with 1 and 2,
* followed by a new line
* Return: always 0
*/
int main(void)
{
int pos;
double n1, n2, f;

n1 = 1;
n2 = 2;
printf("%.0f, %.0f, ", n1, n2);
for (pos = 1; pos <= 96; pos++)
{
f = n1 + n2;
n1 = n2;
n2 = f;
if (pos != 96)
printf("%.0f, ", f);
else
printf("%.0f\n", f);
}
return (0);
}
