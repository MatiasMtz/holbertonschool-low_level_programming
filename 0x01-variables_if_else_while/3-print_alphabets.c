#include <stdio.h>
/**
 * main - Responsible for the execution and termination of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int charValue;
for (charValue = 97; charValue <= 122; charValue++)
{
putchar(charValue);
}
for (charValue = 65; charValue <= 90; charValue++)
{
putchar(charValue);
if (charValue == 90)
{
putchar('\n');
}
}
return (0);
}
