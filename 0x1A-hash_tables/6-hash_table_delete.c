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
		for (temp = ht->array[s]; temp != NULL; temp = actual)
		{
			actual = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	free(ht->array);
	free(ht);
}
