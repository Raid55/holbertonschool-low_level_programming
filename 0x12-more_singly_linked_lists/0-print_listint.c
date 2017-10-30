#include "lists.h"
/**
 * print_listint - prints list
 * @h: head of list
 *
 * Return: amount of elem in list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h)
		printf("%d\n", h->n), h = h->next, nodeCount++;

	return (nodeCount);
}
