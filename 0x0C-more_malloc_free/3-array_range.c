#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: Variable.
 * @max: Variable.
 * Return: Return pointer with a string
 */
int *array_range(int min, int max)
{
	int *str;
	int sum;
	int i;
	int x = 0;

	if (min > max)
	{
		return (NULL);
	}
	sum = max - min;
	str = malloc((sum + 1) * sizeof(int));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		str[x] = i;
		x++;
	}
	return (str);
}
