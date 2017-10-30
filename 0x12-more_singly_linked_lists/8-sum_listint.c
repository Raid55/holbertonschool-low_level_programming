#include "lists.h"
/**
 * sum_listint - sums up linked list
 * @head: head of linked list
 *
 * Return: sum of all data in linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
		sum += head->n, head = head->next;

	return (sum);
}
