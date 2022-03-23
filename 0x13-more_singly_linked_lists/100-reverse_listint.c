#include "lists.h"
/**
 * reverse_listint - Reverses a singly linked list
 * @head: pointer to the first element of the reversed list
 * Return: A pointer to the first element of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *post_node;
	listint_t *pre_node = NULL;

	while (head != NULL && *head != NULL)
	{
		post_node = (*head)->next;
		(*head)->next = pre_node;
		pre_node = *head;
		*head = post_node;
	}
	*head = pre_node;
	return (*head);
}
