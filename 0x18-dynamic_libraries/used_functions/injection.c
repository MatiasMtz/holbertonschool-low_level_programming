#include <unistd.h>
int printf(const char *format, ...)
{
	return (0);
}

int puts (const char *str)
{
	return (write(STDOUT_FILENO, "9 8 10 24 75 - 9\nCongratulations, you win the Jackpot!\n", 57));
}
