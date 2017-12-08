#include "lists.h"
/**
 * get_dnodeint_at_index - gets dnode at certain index
 * @head: head of dlist
 * @index: index where to fetch elem
 *
 * Return: elem at pos
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;

    while (i < index)
    {
        if (!head)
            return (NULL);
        head = head->next, i++;
    }

    return (head);
}
