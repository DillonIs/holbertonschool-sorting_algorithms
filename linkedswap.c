#include "sort.h"

/**
 * swap_linked - Swaps a doubly linked list
 * @head: Head of the list
 * @a: Swap value 1
 * @b: Swap value 2
 *
 */

void swap_linked(listint_t **head, listint_t **a, listint_t *b)
{
	(*a)->next = b->next;
	if (b->next != NULL)
		b->next->prev = *a;

	b->prev = (*a)->prev;
	b->next = *a;

	if ((*a)->prev != NULL)
		(*a)->prev->next = b;
	else
		*head = b;

	(*a)->prev = b;
	*a = b->prev;
}
