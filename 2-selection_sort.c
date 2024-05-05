#include "sort.h"

/**
 * selection_sort - sorts an array of (int), Selection sort
 * @array: the array to be sorted
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	int hold, start = 0;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		start = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[start])
				start = j;
		}

		if (start != (int) i)
		{
			hold = array[i];
			array[i] = array[start];
			array[start] = hold;
			print_array(array, size);
		}
	}
}
