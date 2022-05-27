#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int long counter;
	hash_node_t *head;
	hash_node_t *aux;

	counter = 0;
	while (counter < ht->size)
	{
		head = ht->array[counter];
		while (head != NULL)
		{
			aux = head;
			free(head->key);
			free(head->value);
			head = head->next;
			free(aux);
		}
		counter++;
	}
	free(ht->array);
	free(ht);
}
