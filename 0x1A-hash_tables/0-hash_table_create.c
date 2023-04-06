#include <stdlib.h>
#include <stdio.h>
#include "hash_table.h"
/**
 * assume hash_table.h contains the definition of the hash_table_t type
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	/**
	 * allocate memory for the new hash table
	 */
	if (new_table == NULL)
		/**
		 * check if memory allocation was successful
		 */
	{
		return NULL;
	}
	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t*));
	if (new_table->array == NULL)
	{
		free(new_table);
		return NULL;
	}
	return new_table;
}
