#include "lists.h"

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
