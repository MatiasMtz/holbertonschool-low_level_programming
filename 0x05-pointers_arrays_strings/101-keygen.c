#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - passwords for the program 101-crackme.
* Return: Always 0.
*/
int main(void)
{
	char pass[84];
	int a = 0, sum = 0, x, y;

		srand(time(0));

	while (sum < 2772)
	{
		pass[a] = 33 + rand() % 94;
		sum += pass[a++];
	}
	pass[a] = '\0';
	if (sum != 2772)
	{
		x = (sum - 2772) / 2;
		y = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			x++;
		for (a = 0; pass[a]; a++)
		{
			if (pass[a] >= (33 + x))
			{
				pass[a] -= x;
				break;
			}
		}
		for (a = 0; pass[a]; a++)
		{
			if (pass[a] >= (33 + y))
			{
				pass[a] -= y;
				break;
			}
		}
	}
	printf("%s", pass);
	return (0);
}
