#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * randomizer - function to randomize
 * @n: integer
 */
void randomizer(int n)
{
	int i = 0;
	int random = 0;
	char numbers[] = "0123456789";
	char lower[] = "abcdefghijklmnoqprstuvwyzx";
	char upper[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char password[n];

	srand((unsigned int)(time(NULL)));
	random = rand() % 4;

	for (i = 0; i < n; i++)
	{
		if (random == 1)
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 2)
		{
			password[i] = symbols[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 3)
		{
			password[i] = upper[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = lower[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
/**
 * main - main function.
 * Return: return value of dest.
 */
int main(void)
{
	int n = 10;

	randomizer(n);

	return (0);
}
