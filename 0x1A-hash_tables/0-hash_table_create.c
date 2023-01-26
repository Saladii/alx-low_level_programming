#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: is the size of yhe array
 * Rturn: a pointer to the newly created hash table, Null if something fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;

	htable = malloc(sizeof(hash_table_t));
	if (!htable)
		return Null;

	htable->size = size;
	htable->array = calloc(size, sizeof(hash_node_t *));
	if (!htable->array))
		return (free(htable), Null);

	return (htable);
