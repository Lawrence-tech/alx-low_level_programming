#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using the
 *               Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, or -1 on failure
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);  /* Step size for each jump */
	size_t prev = 0;           /* Previous step index */
	size_t i = 0;              /* Loop variable for each step */

	if (!array)                /* Check for NULL array */
		return (-1);

    /* Jump through the array in step size until value is in range */
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		prev = i;
		i += step;
	}

    /* Perform a linear search in the range of the last jump */
	printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
	for (; prev <= i && prev < size; prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);  /* Value not found */
}
