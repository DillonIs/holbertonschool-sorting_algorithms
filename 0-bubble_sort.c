#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "swap.c"

/**
 * bubble_sort - Sorts using bubble sort algorithm
 * @array: Array being sorted
 * @size: Size of array
 *
 * Void function no return needed
 */

void bubble_sort(int *array, size_t size)
{
	size_t step, index;
	int swapcheck;

	if (array == NULL || size < 2)
	{
		return;
	}

	step = 0;

	while (step < size - 1)
	{
		swapcheck = 0;
		index = 0;
		while (index < size - step - 1)
		{
			if (array[index] > array[index + 1])
			{
				swap(&array[index], &array[index + 1]);
				print_array(array, size);
				swapcheck = 1;
			}
			index++;
		}
		step++;
		if (swapcheck == 0)
		{
			break;
		}
	}
}


