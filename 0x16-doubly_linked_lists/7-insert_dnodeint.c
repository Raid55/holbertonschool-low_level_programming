#include "lists.h"
/**
 * get_nodeint_at_index - gets node at certain index
 * @h: head of dlist
 * @idx: index where to ins elem
 * @n: number to ins in new elem
 *
 * Return: elem at pos
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *tmp;
    dlistint_t *newNode;
    unsigned int i = 1;

    newNode = malloc(sizeof(dlistint_t));
    if (!newNode)
        return (NULL);

    if (h == NULL)
    {
        free(newNode);
        return (NULL);
    }

    newNode->n = n;
    if (idx == 0)
    {
        newNode->next = *h;
        newNode->prev = NULL;
        *h = newNode;
        return (newNode);
    }

    tmp = *h;
    while (tmp)
    {
        if (i == idx)
        {
            tmp->next->prev = newNode;
            newNode->next = tmp->next;
            newNode->prev = tmp;
            tmp->next = newNode;
            return (newNode);
        }
        tmp = tmp->next, i++;
    }
    free(newNode);
    return (NULL);
}
