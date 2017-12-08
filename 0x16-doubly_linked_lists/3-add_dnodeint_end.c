#include "lists.h"
/**
 * add_dnodeint_end - appends a dnode at the end of head
 * @head: where to append the dnode to
 * @n: number to be added
 *
 * Return: dlist added to head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *tmp;
    dlistint_t *holder;

    tmp = malloc(sizeof(dlistint_t));
    if (!tmp)
        return (NULL);

    holder = *head;

    tmp->n = n;
    tmp->next = NULL;

    if (*head == NULL)
    {
        tmp->prev = NULL, *head = tmp;
        return (tmp);
    }

    while (holder->next != NULL)
        holder = holder->next;

    tmp->prev = holder;
    holder->next = tmp;
    return (tmp);
}
