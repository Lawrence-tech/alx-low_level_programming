#ifndef HASH_TABLE
#define HASH_TABLE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  *struct hash_node_s - Node of a hash table.
  *@key: string, the key.
  *@value: The value corresponding to key.
  *@next: A pointer to the next node of the list
  */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
  *struct hash_table_s - Hash table data structure
  *@size: array size
  *@array: array of size size
  */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);

#endif /** HASH_TABLE */
