#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - program that adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 */
int main(int argc, char *argv[])
{
	int number = 0;
	int count;
	int letter;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
		for (count = 1; count < argc; count++)
		{
			for (letter = 0; letter < strlen(argv[count]);
			     letter++)
			{
				if (!((argv[count][letter] >= '0') &&
				      (argv[count][letter] <= '9')))
				{
					printf("Error\n");
					return (1);
				}
			}
		number += (atoi(argv[count]));
		}
	printf("%d\n", number);
	return (0);
}
