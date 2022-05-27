#include "hash_tables.h"
/**
  * hash_table_print - function that prints a hash table.
  * @ht: hash table.
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int counter = 0;
	int flag = 0;

	counter = 0;
	flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (counter < ht->size)
	{
		node = ht->array[counter];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
		counter++;
	}
	printf("}\n");
}
