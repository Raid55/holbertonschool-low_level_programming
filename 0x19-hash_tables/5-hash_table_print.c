#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");
	while (i != ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (first == 0)
				first = 1;
			else
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
