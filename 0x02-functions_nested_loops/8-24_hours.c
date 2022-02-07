#include "main.h"
/**
 * jack_bauer - print all minutes.
 */
void jack_bauer(void)
{
	int hora;
	int min;

	for (hora = 0; hora <= 23; hora++)
	{
		for (min = 0; min <= 59; min++)
		{
			if (hora < 10)
			{
				_putchar('0');
			}
			else
			{
				_putchar(hora / 10 + '0');
			}
			_putchar(hora % 10 + '0');
			_putchar(':');
			if (min < 10)
			{
				_putchar('0');
			}
			else
			{
				_putchar(min / 10 + '0');
			}
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
