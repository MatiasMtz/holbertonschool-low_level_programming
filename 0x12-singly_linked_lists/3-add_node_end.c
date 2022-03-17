#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to the start of the list.
 * @str: string that contains data.
 * Return: NULL if it failed or address of the new element.ZZ
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newendnode, *lastnode = *head;

	newendnode = malloc(sizeof(list_t));
	if (newendnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newendnode->str = strdup(str);
		newendnode->len = _strlen(str);
		newendnode->next = NULL;
		if (*head == NULL)
		{
			*head = newendnode;
			return (newendnode);
		}
		else
		{
			while (lastnode->next != NULL)
			{
				lastnode = lastnode->next;
			}
			lastnode->next = newendnode;
		}
	}
	return (newendnode);
}

/**
 * _strlen - function to count the length of a string.
 * @s: string.
 * Return: length if success.
 */
int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
