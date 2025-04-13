#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "linkedswap.c"

/**
 * insertion_sort_list - Sorts using insertion algorithm
 * @list: Doubly linked list to be sorted
 *
 * No Return value
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insert, *temp;

	if (!list || !*list || !(*list)->next)
	{
		return;
	}

	for (current = (*list)->next; current != NULL; current = temp)
	{
		temp = current->next;
		insert = current->prev;
		while (insert && current->n < insert->n)
		{
			swap_linked(list, &insert, current);
			print_list((const listint_t *)*list);
		}
	}
}
