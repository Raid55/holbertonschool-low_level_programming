#include "lists.h"
/**
 * add_nodeint - adds node to start of list
 * @head: head of list
 * @n:n data number
 *
 * Return: new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
