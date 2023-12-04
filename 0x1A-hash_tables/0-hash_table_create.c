#include "hash_tables.h"


/*
 * Create node function in seperate function
 * link every index of the array of table size with a node function
 *
 * 
 * */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));
	if(!item)
	{
		return(NULL);
	}
	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;

	hash_table_t *table = malloc(sizeof(hash_table_t));
	if (!table)
	{
		return (NULL);
	}
	unsigned long int table->size = size;
	


}
