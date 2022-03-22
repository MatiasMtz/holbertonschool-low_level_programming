#include "lists.h"
/**
 * free_listint2 - frees memory allocated for a list and sets the head to NULL
 * @head: pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *freenode;
	listint_t *next;

	if (head == NULL)
	{
		return;
	}
	freenode = *head;
	while (freenode)
	{
		next = freenode->next;
		free(freenode);
		freenode = next;
	}
	*head = NULL;
}
