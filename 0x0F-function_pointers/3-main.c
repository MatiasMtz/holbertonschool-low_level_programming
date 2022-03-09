#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - calculator
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int par1;
	int par2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	par1 = atoi(argv[1]);
	par2 = atoi(argv[3]);
	if ((argv[2][0] != 37 && argv[2][0] != 47 && argv[2][0] != 43 &&
	argv[2][0] != 45 && argv[2][0] != 42) || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(argv[2])(par1, par2);
	printf("%d\n", result);
	return (0);
}
