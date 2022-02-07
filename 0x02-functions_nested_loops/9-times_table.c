#include "main.h"
/**
 * times_table - asda
 *
 */
void times_table(void)
{
	int i;
	int a;
	int res;
	for (i = 0 ; i <= 9 ; i++)
	{
		for (a = 0 ; a <= 9 ; a++)
		{
			res = i * a;
			if (res >= 10 && a != 0)
			{
				_putchar(res / 10 + '0');
			}
			else if (res < 10 && a != 0)
			{
				_putchar(' ');
			}
			_putchar(res % 10 + '0');
			if (a != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
