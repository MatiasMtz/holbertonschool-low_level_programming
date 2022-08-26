#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t leftArray = 0, rightArray = size - 1, middleArray, count = 0;
	
	if (array == NULL)
		return (-1);
	while (leftArray <= rightArray)
	{
		printf("Searching in array: ");
		for (count = leftArray; count < rightArray; count++)
			printf("%d, ", array[count]);
		printf("%d\n", array[count]);
		middleArray = (leftArray + rightArray) / 2;
		if (array[middleArray] < value)
			leftArray = middleArray + 1;
		else if (array[middleArray] > value)
			rightArray = middleArray - 1;
		else
			return ((int)(middleArray));
	}
	return (-1);
}
