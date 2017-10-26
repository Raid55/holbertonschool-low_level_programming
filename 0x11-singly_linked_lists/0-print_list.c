#include "lists.h"
/**
 * print_list - prints linked list
 * @h: head of linked list
 *
 * Return: amount of elements in list
 */
size_t print_list(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		printf("[%i] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		elem++, h = h->next;
	}

	return (elem);
}
