#include "sort.h"

void int_swap(int *swn1, int *swn2);
void quick_sort_recursion(int array[], int start, int stop, size_t size);
int divi(int *array, int start, int stop, size_t size);

/**
 * int_swap - changes the position of the elements provided.
 * @swn1: one element of the array to swap.
 * @swn2: second element of the array to swap.
 */
void int_swap(int *swn1, int *swn2)
{
	int hold;

	hold = *swn1;
	*swn1 = *swn2;
	*swn2 = hold;
}

/**
 * quick_sort - using Quick Sort, sorts an array of int.
 * @array: a pointer to the array.
 * @size: the size of the array.
 */
void quick_sort(int *array, size_t size)
{
	int len = size;

	if (array == NULL || size < 2)
		return;

	quick_sort_recursion(array, 0, len - 1, size);
}

/**
 * quick_sort_recursion - does the divide and conquer in sorting process.
 * @array: the array to be sorted.
 * @start: where to start the partitioning from
 * @stop: where to end the partitioning at
 * B
 * @size: the array size.
 */
void quick_sort_recursion(int array[], int start, int stop, size_t size)
{
	int rot;

	if (start < stop)
	{
		rot = divi(array, start, stop, size);
		quick_sort_recursion(array, start, rot - 1, size);
		quick_sort_recursion(array, rot + 1, stop, size);
	}
}

/**
 * divi - divides the array into small chunks for sorting (lamuto)
 * @array: the array to sort.
 * @start: where to start dividing the array.
 * @stop: where to stop dividing the array.
 * @size: the size of the array.
 *
 * Return: the index of the new pivot position
 */
int divi(int *array, int start, int stop, size_t size)
{
	int *rot = array + stop;
	int up, down, rotn;

	for (up = down = start; down < stop; down++)
	{
		if (array[down] < *rot)
		{
			if (up < down)
			{
				int_swap(array + down, array + up);
				print_array(array, size);
			}
			up++;
		}
	}

	if (array[up] > *rot)
	{
		int_swap(array + up, rot);
		print_array(array, size);
	}

	rotn = up;

	return (rotn);
}
