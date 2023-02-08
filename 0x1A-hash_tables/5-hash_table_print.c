#include "hash_tables.h"

/**
  *hash_table_print - function to print hash table
  *@ht: the hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int s;
	hash_node_t *temp = NULL;
	char *d = "";

	if (ht == NULL)
		return;
	printf("{");
	for (a = 0; s < ht->size; s++)
	{
		if (ht->array[s] != NULL)
		{
			temp = ht->array[s];
			while (temp != NULL)
			{
				printf("%s\ '%s\': \'%s\'", d, temp->key, temp->value);
				d = ", ";
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
