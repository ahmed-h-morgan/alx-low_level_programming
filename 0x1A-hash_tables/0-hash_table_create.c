#include "hash_tables.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
*/


hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for(i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
