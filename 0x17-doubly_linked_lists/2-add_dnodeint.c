#include "lists.h"
/**
 *  add_dnodeint - adds a new node at the beginning of a linked list.
 *  @head: head of the node.
 *  @n: value to be added to the new node.
 *  Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *first_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		first_node = *head;
		first_node->prev = new_node;
		new_node->next = first_node;
		*head = new_node;
		return (new_node);
	}
}
