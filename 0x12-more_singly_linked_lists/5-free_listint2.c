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
	listint_t *tmp2;

	if (*head == NULL)
		return;

	tmp2 = *head;
	while (tmp2)
	{
		tmp = tmp2->next;
		free(tmp2);
		tmp2 = tmp;
	}

	*head = NULL;
}
