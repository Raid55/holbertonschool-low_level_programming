#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *prev;
	int i = 0;
	
	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);
	
	prev = *head;

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
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	while (prev->next != NULL)
		prev = prev->next;

	prev->next = tmp;
	return (tmp);
}
