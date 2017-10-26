#include "lists.h"

void free_list(list_t *head)
{
	list_t *last;

	while (head != NULL)
	{
		last = head;
		head = head->next;
		free(last->str);
		free(last);
	}
	free(head);
}

