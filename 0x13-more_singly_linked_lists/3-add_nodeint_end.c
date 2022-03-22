#include "lists.h"
/**
 * add_nodeint_end - function that adds a node at the end of a list.
 * @head: pointer to the start of the list.
 * @n: New number.
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux;
	listint_t *newnode;

	aux = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = newnode;
	return (newnode);
}
