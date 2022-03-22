#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to the first node
 * Return:  the head nodes data (n).
 **/

int pop_listint(listint_t **head)
{
	int copy;
	listint_t *aux;

	if (*head == NULL)
	{
		return (0);
	}
	aux = *head;
	*head = (*head)->next;
	copy = aux->n;
	free(aux);
	return (copy);
}
