#include "hash_tables.h"
/**
 * hash_table_set - sets key/val in hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 0 on fail and 1 on pass
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmpNode = NULL;
	hash_node_t *tmp;
	unsigned long int keyInd;

	if (ht == NULL)
		return (0);
	if (key == NULL || !strcmp(key, ""))
		return (0);

	keyInd = key_index((const unsigned char *)key, ht->size);
	
	tmp = ht->array[keyInd];
	while (tmp)
	{
		if (!strcmp(key, tmp->key))
		{
			tmp->value = (char *)value;
			return (1);
		}
		tmp = tmp->next; 
	}

	tmpNode = malloc(sizeof(hash_node_t));
	if (tmpNode == NULL)
		return (0);

	tmpNode->key = (char *)key;
	tmpNode->value = (char *)value;
	if (ht->array[keyInd] != NULL)
		tmpNode->next = ht->array[keyInd], ht->array[keyInd] = tmpNode;
	else
		tmpNode->next = NULL, ht->array[keyInd] = tmpNode;

	return (1);
}
