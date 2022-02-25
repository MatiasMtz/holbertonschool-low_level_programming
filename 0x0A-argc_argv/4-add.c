#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if success, 1 if error
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
			for (letter = 0; letter < (int)strlen(argv[count]);
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
