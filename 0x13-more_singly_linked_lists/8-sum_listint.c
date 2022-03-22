#include "lists.h"
/**
 *sum_listint - returns the sum of all data of a listint_t list
 *@head: head of the list.
 *Return: 0 if the list is empty or sum of all data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
