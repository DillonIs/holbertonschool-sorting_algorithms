#include "sort.h"

/**
 * swap - Swaps pointers
 * @a: Pointer to first swap value
 * @b: Pointer to second swap value
 *
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
