#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: size of table to be created
 *
 * Return: new table of x size
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	while (i != size)
		table->array[i++] = NULL;


	return (table);
}
