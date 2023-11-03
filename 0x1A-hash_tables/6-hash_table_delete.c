#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp_node = NULL;
	unsigned long int index = 0;

	if (ht)
	{
		while (index < ht->size)
		{
			while (ht->array[index])
			{
				temp_node = ht->array[index];
				ht->array[index] = ht->array[index]->next;

				if (temp_node->value)
					free(temp_node->value);
				if (temp_node->key)
					free(temp_node->key);
				free(temp_node);
			}
			free(ht->array[index]);
			index++;
		}
		free(ht->array);
		free((void *)ht);
	}
}
