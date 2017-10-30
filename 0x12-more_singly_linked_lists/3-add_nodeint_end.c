#include "lists.h"
/**
 * add_nodeint_end - adds node to end of list
 * @head: head of linked list
 * @n: data to add to list
 *
 * Return: new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *tmp;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newNode;

	return (newNode);
}
