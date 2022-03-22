#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the start of the list
 * Return: number of items in the list
 **/
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h =  h->next;
	}
	return (count);
}
