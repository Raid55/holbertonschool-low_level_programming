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

	while (head != NULL)
	{
		last = head;
		head = head->next;
		free(last->str);
		free(last);
	}
	free(head);
}

