#include "sort.h"
/**
 * insertion_sort_list - insertion sort with doubly linked list
 * @list: full list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr;

	if (!(*list) || !list || !(*list)->next)
		return;

	curr = (*list);
	while (curr->next)
		curr = curr->next, behindSort(list, curr);
}
/**
 * behindSort - sorts the chunk behind the current node
 * @fullList: full list for changing first node and printing
 * @currNode: current node starting from
 */
void behindSort(listint_t **fullList, listint_t *currNode)
{
	listint_t *behind;
	listint_t *tmpPrev;
	listint_t *tmpNext;

	behind = currNode->prev;
	while (behind && (behind->n > currNode->n))
	{
		tmpPrev = behind->prev;
		tmpNext = currNode->next;
		currNode->next = behind;
		behind->prev = currNode;
		if (tmpPrev)
			currNode->prev = tmpPrev, tmpPrev->next = currNode;
		else
			currNode->prev = NULL, *fullList = currNode;

		if (tmpNext)
			behind->next = tmpNext, tmpNext->prev = behind;
		else
			behind->next = NULL;

		print_list(*fullList);
		behind = currNode->prev;
	}
}
