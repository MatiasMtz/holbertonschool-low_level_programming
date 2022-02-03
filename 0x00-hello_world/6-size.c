#include <stdio.h>
/**
 * main - Prints out a string to stdout.
 * Return: 0 if success.
 */
int main(void)
{
int i;
float f;
long int li;
long long ll;
char c;

printf("Size of int: %ld byte(s)\n", sizeof(i));
printf("Size of float: %ld byte(s)\n", sizeof(f));
printf("Size of double: %ld byte(s)\n", sizeof(li));
printf("Size of double: %ld byte(s)\n", sizeof(ll));
printf("Size of char: %ld byte(s)\n", sizeof(c));

return (0);
}
