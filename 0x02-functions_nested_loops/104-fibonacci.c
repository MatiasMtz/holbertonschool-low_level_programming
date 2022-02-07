#include <stdio.h>
/**
 *main - print first 98 fibonacci numbers.
 *Return: 0 success.
 */
int main(void)
{
	long n1 = 1;
	long n2 = 0;
	long sum;
	int count;

	for (count = 0; count <= 98; count++)
	{
		sum = n1 + n2;
		n2 = n1;
		n1 = sum;
		if (count != 98)
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
