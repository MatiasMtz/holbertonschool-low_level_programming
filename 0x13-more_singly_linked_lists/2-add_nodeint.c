#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at the beginning of the list.
 * @head: pointer to the first element of the list.
 * @n: number to fill the list.
 * Return: address of the new node or NULL if it failed.
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
