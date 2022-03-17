#include "lists.h"
/**
 * add_node - function that adds a new node at the end of a list_t list.
 * @head: pointer to the next node.
 * @str: string to duplicate and to take chars.
 * Return: address of the new element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

/**
 * _strlen - check the code
 * @s: pointer to a
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
