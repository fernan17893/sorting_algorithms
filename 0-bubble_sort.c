#include "sort.h"

/**
* bubble_sort - sorts array of integers in ascending order using
*  Bubble sort algorithm
* @array: array of integers
* @size: size of array
*
*
*/

void bubble_sort(int *array, size_t size)
{

	int tmp = 0;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
