#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *table = malloc(size * sizeof(hash_node_t));
	if (!table)
	{
		return (NULL);
	}
	
	return (table);
}