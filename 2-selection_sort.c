#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - Sorts using the selection algorithm
 * @array: Pointer to array being sorted
 * @size: The amount of elements in the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t step, index, min_idx;
	int temp;

	for (step = 0; step < size - 1; step++)
	{
		min_idx = step;

		for (index = step + 1; index < size; index++)
		{
			if (array[index] < array[min_idx])
			{
				min_idx = index;
			}
		}

			if (min_idx != step)
			{
				temp = array[step];
				array[step] = array[min_idx];
				array[min_idx] = temp;
				print_array(array, size);
			}
	}
}
