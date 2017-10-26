#include "lists.h"
/**
 * free_list - free linked list
 * @head: head of linked list to free
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *last;

	if (!head)
		return;

	while (head->next != NULL)
	{
		last = head;
		head = head->next;
		free(last->str);
		free(last);
	}
	free(head->str);
	free(head);
}

