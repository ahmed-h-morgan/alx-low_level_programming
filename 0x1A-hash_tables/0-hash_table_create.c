#include "hash_tables.h"


/*
 * Create node function in seperate function
 * link every index of the array of table size with a node function
 *
 * 
 * */

hash_node_t *create_item(char *key, char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));
	if(!item)
	{
		return(NULL);
	}
	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;

	return (item);
}

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *table = malloc(sizeof(hash_table_t));
	if (!table)
	{
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **item) calloc(table->size, sizeof(hash_node_t));

	for(i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return(table);

}
