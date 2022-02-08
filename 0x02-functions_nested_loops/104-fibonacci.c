#include <stdio.h>

/**
*main - printing the first 98 Fibonacci numbers starting with 1 and 2
*
*Return: return 0 if success.
*/

int main(void)
{
long int i, f, s, n, h2, h1, h3, h4, h0, h5;

f = 0;
s = 1;
i = 0;
while (i < 91)
{
n = f + s;
f = s;
s = n;
printf("%ld", n);
printf(",");
printf(" ");
i++;
}

h4 = f / 1000000000;
h3 = f % 1000000000;
h2 = s / 1000000000;
h1 = s % 1000000000;
while (i < 97)
{
h0 = h4 + h2;
h5 = h3 + h1;
printf("%ld%ld", h0, h5);
if (i != 96)
{
printf(",");
printf(" ");
}
h4 = h2;
h3 = h1;
h2 = h0;
h1 = h5;
i++;
}
printf("\n");
return (0);
}
