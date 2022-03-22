#include "lists.h"
/**
 * free_listint - frees memory from a list
 * @head: pointer to the list
 **/
void free_listint(listint_t *head)
{
	listint_t *freenode;
	listint_t *next;

	freenode = head;
	while (freenode != NULL)
	{
		next = freenode->next;
		free(freenode);
		freenode = next;
	}
}
