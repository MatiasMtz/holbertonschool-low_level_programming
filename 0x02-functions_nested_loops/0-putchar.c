#include "main.h"
/**
 * main - Entry point.
 * Putchar - writes a character to stdout.
 * Return: 0 if success.
 */
int main(void)
{
int i;
char string[] = "_putchar";
for (i = 0; i < 8; i++)
{
_putchar(string[i]);
}
_putchar('\n');
return (0);
}
