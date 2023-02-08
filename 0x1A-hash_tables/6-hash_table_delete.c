#include "hash_tables.h"

/**
  *hash_table_delete - deletes a hash table
  *@ht: is the hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int s;
	hash_node_t *temp, *actual;

	if (ht == NULL)
		return;
	for (s = 0; s < ht->size; s++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[s];
			while (temp != NULL)
			{
				actual = temp;
				temp = temp->next;
				free(actual->key);
				free(actual->value);
			}
		}
	}
	free(ht->array);
	free(ht);
}
