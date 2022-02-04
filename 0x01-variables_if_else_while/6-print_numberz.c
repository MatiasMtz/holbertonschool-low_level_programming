#include <stdio.h>
/**
 * main - Responsible for the execution and termination of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int l;
for (l = 0; l <= 9; l++)
{
putchar(l % 10 + '0');
}
putchar('\n');
return (0);
}
