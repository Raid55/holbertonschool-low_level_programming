#include "lists.h"
/**
 * free_list - free linked list
 * @head: head of linked list to free
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next;

	if (!head)
		return;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}

