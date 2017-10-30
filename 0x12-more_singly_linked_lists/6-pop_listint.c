#include "lists.h"

int pop_listint(listint_t **head)
{
	int tmpNum;
	listint_t *tmpList;

	if (*head == NULL)
		return (0);

	tmpList = *head;
	tmpNum = tmpList->n;

	*head = tmpList->next;
	free(tmpList);

	return (tmpNum);
}
