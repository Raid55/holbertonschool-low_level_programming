#include "lists.h"
/**
 * print_dlistint - prints dlinked list
 * @h: head of dlinked list
 *
 * Return: amount of elements in dlist
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t elem = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        elem++, h = h->next;
    }

    return (elem);
}
