#include "lists.h"
/**
 * get_nodeint_at_index - gets node at certain index
 * @head: head of list
 * @index: index where to fetch elem
 *
 * Return: elem at pos
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
		head = head->next, i++;

	return (head);
}
