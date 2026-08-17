#include "hash_tables.h"

/**
 * hash_table_create - a function to create a
 * hash table with memory allocated.
 * @size: the number of elements in the array
 *
 * Return: hash_table_t - an empty hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tableTop;
	hash_node_t **newArray;

	tableTop = malloc(sizeof(char *) * size);
	if (tableTop == NULL)
		return (NULL);

	newArray = malloc(sizeof(hash_node_t));
	if (newArray == NULL)
		return (NULL);

	tableTop->size = size;
	tableTop->array = newArray;

	return (tableTop);
}
