#include "lists.h"
/**
 * delete_dnodeint_at_index - delete dnode at index
 * @head: head of dlist
 * @index: index where to delete dnode
 *
 * Return: 1 if completed or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *tmp;
    dlistint_t *tmp2;

    if (*head == NULL)
        return (-1);

    tmp = *head;
    if (index == 0 && !tmp->next)
    {
        free(*head);
        *head = NULL;
        return (1);
    }
    else if(index == 0)
    {
        tmp->next->prev = NULL;
        *head = tmp->next;
        free(tmp);
        return (1);
    }

    while (tmp != NULL && i < (index - 1))
        tmp = tmp->next, i++;

    if (tmp == NULL || tmp->next == NULL)
        return (-1);

    tmp->next->next->prev = tmp;
    tmp2 = tmp->next->next;
    free(tmp->next);
    tmp->next = tmp2;

    return (1);
}
