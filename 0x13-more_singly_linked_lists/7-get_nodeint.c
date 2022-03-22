#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t list
 *@head: head of the list.
 *@index: index of the node, starting at 0.
 *Return: NULL if the node does not exist or address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head && counter < index)
		head = head->next, counter++;

	return (head);
}
