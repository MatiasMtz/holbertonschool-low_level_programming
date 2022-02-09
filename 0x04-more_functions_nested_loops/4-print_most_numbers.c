#include "main.h"
/**
 * print_most_numbers - check the code.
 *
 */
void print_most_numbers(void)
{
int numbers;
for (numbers = '0' ; numbers <= '9' ; numbers++)
{
if (!((numbers == '2') || (numbers == '4')))
{
_putchar(numbers);
}
}
_putchar('\n');
}
