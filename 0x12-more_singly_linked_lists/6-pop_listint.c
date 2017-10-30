#include "lists.h"
/**
 * pop_listint - pops first item of linked list
 * @head: head of linked list
 *
 * Return: data number that was on linked list
 */
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
