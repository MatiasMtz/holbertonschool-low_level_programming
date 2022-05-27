#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table to add or update the key/value.
 * @key: key.
 * @value: value associated with the key.
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = NULL;
	char *valueCpy = NULL;
	unsigned long int index = 0, counter = 0, aux;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	valueCpy = strdup(value);
	index = key_index((const unsigned char *) key, ht->size);
	for (counter = index; ht->array[counter]; counter++)
	{
		aux = strcmp(ht->array[counter]->key, key);
		if (aux == 0)
		{
			free(ht->array[counter]->value);
			ht->array[counter]->value = valueCpy;
			return (1);
		}
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(valueCpy);
		return (0);
	}
	newNode->key = strdup(key);
	newNode->value = valueCpy;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
