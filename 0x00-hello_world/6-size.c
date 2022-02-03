#include <stdio.h>
/**
 * main - Prints out a string to stdout.
 * Return: 0 if success.
 */
int main(void)
{
int intType;
float floatType;
long int longintType;
long long longlongType;
char charType;

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(longintType));
printf("Size of double: %zu bytes\n", sizeof(longlongType));
printf("Size of char: %zu byte\n", sizeof(charType));

return (0);
}
