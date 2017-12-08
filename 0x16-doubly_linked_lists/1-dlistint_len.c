#include "lists.h"
/**
 * dlistint_len - returns lenth of dlinked list
 * @h: head of dlinked list
 *
 * Return: size of dlinked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
		elem++, h = h->next;

	return (elem);
}
