#include "lists.h"
/**
 * free_listint - frees linked list
 * @head: head of linkes list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
