#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_node_t **) malloc(size * sizeof(hash_node_t));
	/*table->array = calloc(size, sizeof(hash_node_t));*/
	return (table);
}