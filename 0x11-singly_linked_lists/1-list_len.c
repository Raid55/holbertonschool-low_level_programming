#include "lists.h"
/**
 * list_len - returns lenth of linked list
 * @h: head of linked list
 *
 * Return: size of linked list
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}

	return (elem);
}
