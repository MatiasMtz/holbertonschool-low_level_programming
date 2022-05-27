#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return: pointer to the newly created hush table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable = NULL;

	newTable = malloc(sizeof(*newTable));
	if (newTable == NULL)
		return (NULL);
	newTable->array = malloc(sizeof(*(newTable->array)) * size);
	if (newTable == NULL)
	{
		free(newTable);
		return (NULL);
	}
	newTable->size = size;
	return (newTable);
}
