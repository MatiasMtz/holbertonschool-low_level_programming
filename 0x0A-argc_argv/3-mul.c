#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: argument count.
 * @argv: argument vector.
 */
void main(int argc, char *argv[])
{
	int number;

	if (argc == 3)
	{
		number = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", number);
	}
	else
	printf("Error\n");
}
