#include "lists.h"
/**
 * print_listint - prints data part of a linked list
 * @h: pointer to the head of a linked list
 * Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
