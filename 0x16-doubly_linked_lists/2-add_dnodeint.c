#include "lists.h"
/**
 * add_dnodeint - adds not to start of dlinked list
 * @head: head of dlinked list
 * @n: number to be added
 *
 * Return: added item to dlist
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *tmp;

    tmp = malloc(sizeof(dlistint_t));
    if (!tmp)
        return (NULL);

    tmp->n = n;
    tmp->prev = NULL;

    if (*head)
        (*head)->prev = tmp, tmp->next = *head;
    else
        tmp->next = NULL;
    
    *head = tmp;

    return (tmp);
}
