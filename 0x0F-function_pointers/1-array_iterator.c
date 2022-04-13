#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of the arrat
 * @array: array
 * @size: array size
 * @action: pointer to the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);

}
