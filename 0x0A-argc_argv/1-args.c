#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: argument count.
 * @argv: argument vector.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
