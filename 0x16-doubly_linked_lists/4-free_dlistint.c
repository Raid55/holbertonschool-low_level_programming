#include "lists.h"
/**
 * free_dlistint - free dlinked list
 * @head: head of dlinked list to free
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (!head)
		return;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
