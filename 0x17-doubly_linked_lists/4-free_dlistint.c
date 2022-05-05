#include "lists.h"
/**
 * free_dlistint - frees a linked list.
 * @head: head of the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux_free;
	dlistint_t *next_node;

	if (head == NULL)
		return;
	aux_free = head;
	next_node = aux_free->next;
	while (next_node != NULL)
	{
		free(aux_free);
		aux_free = next_node;
		next_node = next_node->next;
	}
	free(aux_free);
}
