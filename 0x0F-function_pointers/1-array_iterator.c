#include "function_pointers.h"
#include <stdlib.h>

/**
  *array_iterator - executes a function given as a parameter on each
  *element of an array.
  *@array: input array
  *@size: size of array
  *@action: pointer to the function used
  *Return:nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != 0 && size >= 1 && action != 0)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
