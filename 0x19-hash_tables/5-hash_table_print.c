#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i != ht->size)
	{
		while (ht->array[i])
		{
			if (first == 0)
				first = 1;
			else
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	printf("}\n");
}
