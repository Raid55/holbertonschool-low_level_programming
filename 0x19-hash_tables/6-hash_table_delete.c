#include "hash_tables.h"
/**
 * hash_table_delete - frees hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;
	hash_node_t *tmp2;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			tmp2 = tmp;
			tmp = tmp->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
