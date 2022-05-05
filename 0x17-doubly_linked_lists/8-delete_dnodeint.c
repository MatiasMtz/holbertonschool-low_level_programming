#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head of the linked list.
 * @index: node to be deleted.
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(current_node) < index + 1)
		return (-1);
	if (index == 0)
	{
		*head = current_node->next;
		if (current_node->next)
			current_node->next->prev = NULL;
		current_node->next = NULL;
		free(current_node);
		return (1);
	}
	while (i < index)
	{
		current_node = current_node->next;
		i++;
	}
	current_node->prev->next = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = current_node->prev;
	free(current_node);
	return (1);
}
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
