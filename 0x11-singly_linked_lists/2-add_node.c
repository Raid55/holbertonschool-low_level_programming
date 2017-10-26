#include "lists.h"
/**
 * add_node - adds not to start of linked list
 * @head: head of linked list
 * @str: string to be added in list
 *
 * Return: added item to list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));
	int i = 0;

	if (!tmp)
		return (NULL);

	tmp->str = strdup(str);
	if (tmp->str == NULL)
	{
		free(tmp->str);
		free(tmp->next);
		free(tmp);
		return (NULL);
	}

	while (str[i])
		i++;
	tmp->len = i;

	tmp->next = *head;

	*head = tmp;

	return (tmp);
}
