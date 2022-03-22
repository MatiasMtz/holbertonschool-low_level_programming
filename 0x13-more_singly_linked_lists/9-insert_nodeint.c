#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * @idx: The index of the listint_t list, where node should be added.
 * @n: The integer for the new node to contain.
 * Return: If the function fails, NULL, otherwise, the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *copy = *head;
	unsigned int aux;

	new = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = copy;
		*head = newnode;
		return (newnode);
	}

	for (aux = 0; aux < (idx - 1); aux++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	newnode->next = copy->next;
	copy->next = newnode;

	return (newnode);
}
