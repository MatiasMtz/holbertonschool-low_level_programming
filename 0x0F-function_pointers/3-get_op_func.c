#include "3-calc.h"
#include <stdlib.h>
/**
 * *get_op_func - selects the correct operation to realize
 * @s: operator introduced by the user.
 * Return: pointer to the correct function.
 */
int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op[0] != '\0')
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
