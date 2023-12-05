#include "hash_tables.h"

/**
 * create_item - create anew node item
 * @key: the key of search
 * @value: the value that we looking for
 * Return: a pointer to thenext node
*/

hash_node_t *create_item(char *key, char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (!item)
	{
		return (NULL);
	}
	item->key = strcpy(item->key, key);
	item->value = strcpy(item->value, value);
	item->next = NULL;

	return (item);
}

/**
 * hash_table_create - cteate the hash table
 * @size: the size of the array
 * Return: a pointer to the hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
	{
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t));

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}


	printf("Memory used by hash_node_t structure: %lu bytes\n", sizeof(hash_node_t));
	printf("Memory used by hash_table_t structure: %lu bytes\n", sizeof(hash_table_t));
	printf("Memory used by key string: %lu bytes\n", strlen(key) + 1);
	printf("Memory used by value string: %lu bytes\n", strlen(value) + 1);
	printf("Memory used by array of hash_node_t pointers: %lu bytes\n", size_t * sizeof(hash_node_t *));

	return (table);

}
