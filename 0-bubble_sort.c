#include "sort.h"

/**
 * bubble_sort - sort an array using Bubble sort alg.
 * @array: pointer to the array to be sorted
 * @size: the size of the array to be sorted
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int hold;

	for (i = 0; i < size; i++)
	{
		/*not go out of bound with array[j + 1]*/
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				hold = array[j + 1];
				array[j + 1] = array[j];
				array[j] = hold;
				print_array(array, size);
				/* print_array(NULL, 0); print a new line*/
			}
		}
	}
}
