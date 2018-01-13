#include "hash_tables.h"
/**
 * hash_table_get - gets value for hash table wit tha value
 * @ht: hash table
 * @key: key to lookup
 *
 * Return: returns value or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int keyInd;

	if (ht == NULL || key == NULL)
		return (NULL);

	keyInd = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[keyInd];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

