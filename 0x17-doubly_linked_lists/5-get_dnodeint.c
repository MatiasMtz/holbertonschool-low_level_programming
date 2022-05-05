#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list.
 * @head: head of the linked list.
 * @index: index of the node, starting from 0.
 * Return: address of the node if success or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int count = 0;

	if (head == NULL)
	return (NULL);
	current_node = head;
	while (current_node != NULL)
	{
		if (count == index)
			return (current_node);
		current_node = current_node->next;
		count++;
	}
	return (NULL);
}
