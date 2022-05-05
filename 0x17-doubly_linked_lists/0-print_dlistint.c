#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: Head of the linked list.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *i;

	if (h == NULL)
		return (0);
	i = h;
	while (i != NULL)
	{
		count++;
		printf("%d\n", i->n);
		i = i->next;
	}
	return (count);
}
