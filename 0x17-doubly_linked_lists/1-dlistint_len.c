#include "lists.h"
/**
 * dlistint_len - number of elements in a linked list.
 * @h: head of the linked list.
 * Return: the number of elements, or NULL if it failed.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node;
	size_t count = 0;

	if (h == NULL)
		return (0);
	current_node = h;
	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}
