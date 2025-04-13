#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * quick_sort - Quick sort algorithm
 * @array: Pointer to array being sorted
 * @size: Amount of elements in the array
 *
 * No return value - void function
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
	{
		return;
	}
	quicksort(array, 0, size - 1, size);
}

/**
 * quicksort - Recursive function for quick sort
 * @array: Pointer to array
 * @start: First element of array
 * @end: Last element of array
 * @size: Amount of elements
 *
 */

void quicksort(int *array, int start, int end, size_t size)
{
	if (start < end)
	{
		int pivotVal;

		pivotVal = lomuto_part(array, start, end, size);
		quicksort(array, start, pivotVal - 1, size);
		quicksort(array, pivotVal + 1, end, size);
	}
}

/**
 * lomuto_part - Lomuto partition scheme algorithm
 * @array: Pointer to array
 * @start: First element of array
 * @end: Last element of array
 * @size: Amount of elements in array
 *
 * Return: Returns the function back
 */

int lomuto_part(int *array, int start, int end, size_t size)
{
	int pivotVal = array[end];
	int i = start - 1;
	int j;
	int didswap;

	for (j = start; j < end; j++)
	{
		if (array[j] < pivotVal)
		{
			i++;
			didswap = swap_int(&array[i], &array[j]);
			if (didswap)
			{
				print_array(array, size);
			}
		}
	}
	didswap = swap_int(&array[i + 1], &array[end]);
	if (didswap)
	{
		print_array(array, size);
	}
	return (i + 1);
}


/**
 * swap_int - Swaps two integers together
 * @a: First int
 * @b: Second int
 *
 * Return: Returns 1 if successful swap occurred
 */

int swap_int(int *a, int *b)
{
	if (*a != *b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
		return (1);
	}
	return (0);
}
