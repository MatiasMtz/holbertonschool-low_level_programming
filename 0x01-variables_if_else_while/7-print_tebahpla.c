#include <stdio.h>
/**
 * main - Responsible for the execution and termination of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char l;
for (l = 'z'; l >= 'a'; l--)
{
putchar(l);
}
putchar('\n');
return (0);
}
