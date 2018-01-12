#include "hash_tables.h"

/**
 * key_index - genereates key bassed of hash func
 * @key: key to hash
 * @size: size of table to mod by
 *
 * Return: int where to store key/val
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
