#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: argument count.
 * @argv: argument vector.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int count = 0;

	for (count = 0; count < argc; count++)
	{
		printf("%d\n", count);
	}
	return (0);
}
