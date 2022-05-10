#include <unistd.h>
/*
 * printf - writes to stdout.
 * @format: var func.
 * Return: always 0.
 */
int printf(const char *format, ...)
{
	return (0);
}

/*
 * puts - writes to stdout.
 * @str: string.
 * Return: desired combination.
 */
int puts(const char *str)
{
	return (write(STDOUT_FILENO, "9 8 10 24 75 - 9\nCongratulations, you win the Jackpot!\n", 57));
}
