#include "main.h"
/**
 *_islower - condition if mayus:0 else: 1.
 *@c: variable.
 *Putchar - writes a character to stdout.
 *Return: 0 if upper, 1 if lower.
 */
int _islower(int c)
{

	if (c > 97 && c < 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
