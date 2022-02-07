#include <stdio.h>
/**
 *main - print first 50 fibonacci numbers.
 *Return: 0 success.
 */
int main(void)
{
	long n1 = 1;
	long n2 = 0;
	long sum;
	int count;

	for (count = 0; count <= 49; count++)
	{
		sum = n1 + n2;
		n2 = n1;
		n1 = sum;
		if (count != 49)
		{
			printf("%ld, ", sum);
		}
		else
		{
			printf("%ld\n", sum);
		}
	}
	return (0);
}
