#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: head of list
 * @index: index where to delete node
 *
 * Return: 1 if completed or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;
	listint_t *tmp2;

	if (*head == NULL)
	{
		return (-1);
	}

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp != NULL && i < (index - 1))
		tmp = tmp->next, i++;

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	/*dident know you could do this, arrow to arrow pointer like that*/
	/*since i did index -1 this fetches the node after after the one being del*/
	tmp2 = tmp->next->next;
	free(tmp->next);
	tmp->next = tmp2;

	return (1);
}
