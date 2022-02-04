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
char n;
for (n = 'a'; n <= 'z'; n++)
{
if (!((n == 'q') || (n == 'e')))
{
putchar(n);
}
}
putchar('\n');
return (0);
}
