#include "stdio.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	int n;
	for (n = 1; n < 101 ; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d",n);
		}
		if (n < 100)
		{
		printf(" ");
		}
	}
	printf("\n");
	return (0);
}
