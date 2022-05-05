#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data(n) of a linked list.
 * @head: head of the linked list.
 * Return: total value of all data.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;
	int total = 0;

	if (head == NULL)
		return (0);
	current_node = head;
	while (current_node != NULL)
	{
		total += current_node->n;
		current_node = current_node->next;
	}
	return (total);
}
