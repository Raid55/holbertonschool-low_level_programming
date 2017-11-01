#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at idx location
 * @head: head of linked list
 * @idx: pos to insert new node
 * @n: data to fill new node with
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *tmp;
	unsigned int i = 1;

	if (!newNode)
		return (NULL);

	if (head == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	tmp = *head;
	while (tmp)
	{
		if (i == idx)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		tmp = tmp->next, i++;
	}
	free(newNode);
	return (NULL);
}
