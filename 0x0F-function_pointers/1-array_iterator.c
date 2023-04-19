#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - excute a function on each element of the array
 * @array: array of int
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0 || !array || !action)
		return;

	for (i = 0; i < size ; i++)
	{
		(*action)(array[i]);
	}
}
