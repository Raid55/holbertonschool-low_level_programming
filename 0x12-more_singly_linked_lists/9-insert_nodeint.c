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
	unsigned int i = 0;

	if (!newNode)
		return (NULL);

	if (*head == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (idx == 0)
	{
		newNode->n = n;
		if ((*head)->next != NULL)
			newNode->next = (*head)->next;
		else
			newNode->next = NULL;
		*head = newNode;
		return (newNode);
	}

	tmp = *head;
	while (tmp && i < (idx - 1))
		tmp = tmp->next, i++;
	if (!tmp)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;

	newNode->next = tmp->next;
	tmp->next = newNode;

	return (newNode);
}
