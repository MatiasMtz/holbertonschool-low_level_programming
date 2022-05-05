#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the linked list.
 * @idx: index of the list where the new node should be added. Starts at 0.
 * @n: content of the new node.
 * Return: address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node, *new_node, *prev_node;
	unsigned int i = 0;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	current_node = *h;
	prev_node = NULL;
	while (current_node != NULL)
	{
		if (i == idx)
		{
			prev_node->next = new_node;
			new_node->prev = prev_node;
			new_node->next = current_node;
			current_node->prev = new_node;
			return (new_node);
		}
		if ((i == idx - 1) && (current_node->next == NULL))
		{
			current_node->next = new_node;
			new_node->prev = current_node;
			return (new_node);
		}
		prev_node = current_node;
		current_node = current_node->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
