#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp_node = NULL;
	unsigned long int index = 0;
	char *comma = "";

	if (ht)
	{
		printf("{");
		while (index < ht->size)
		{
			temp_node = ht->array[index];

			while (temp_node)
			{
				printf("%s", comma);
				comma = ", ";

				if (temp_node->key)
					printf("'%s': '%s'", temp_node->key, tmp_node->value);

				temp_node = temp_node->next;
			}
			index++;
		}
		printf("}\n");
	}
}
