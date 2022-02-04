#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Responsible for the execution and termination of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 97;
while (n < 123)
if (n != 101 && n != 113)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
