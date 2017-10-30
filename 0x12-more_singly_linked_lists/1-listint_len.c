#include "lists.h"
/**
 * listsint_len - counts elements
 * @h: head node
 *
 * Return: number of elem
 */
size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h)
		h = h->next, nodeCount++;
	
	return (nodeCount);
}
