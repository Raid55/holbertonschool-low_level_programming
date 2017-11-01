#include "lists.h"
/**
 * free_listint2 - free linked list connect with a double pointer
 * @head: head of linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *curr;

	if (head == NULL || *head == NULL)
		return;

	curr = *head;
	while (curr->next)
	{
		tmp = curr->next;
		free(curr);
		curr = tmp;
	}

	free(curr->next);
	free(curr);
	*head = NULL;
}
