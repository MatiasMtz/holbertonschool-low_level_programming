#include "main.h"
/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int x;
	char a;

	for (x = 0 ; x < 10; x++)
	{
		for (a = 0 ; a <= 14 ; a++)
		{
			if (a > 9)
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
				}
		_putchar('\n');
	}
}
