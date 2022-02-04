#include <stdio.h>
/**
 * main - Responsible for the execution and termination of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
for (a = 97; a <= 122; a++)
{
putchar(a);
}
for (a = 65; a <= 90; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
