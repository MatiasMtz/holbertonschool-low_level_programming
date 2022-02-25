#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - program that adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if success, 1 if error.
 */
int main(int argc, char *argv[])
{
	int n;
	int count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (count = 0; n > 0; count++)
	{
		if (n >= 25)
			count -= 25;
		else if (n >= 10)
			count -= 10;
		else if (n >= 5)
			count -= 5;
		else if (n >= 2)
			count -= 2;
		else
			count -= 1;
	}
	printf("%d\n", count);
	return (0);
}
