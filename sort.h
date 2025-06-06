#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void swap(int *a, int *b);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_linked(listint_t **head, listint_t **a, listint_t *b);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int lomuto_part(int *array, int start, int end, size_t size);
void quicksort(int *array, int start, int end, size_t size);
int swap_int(int *a, int *b);


#endif
