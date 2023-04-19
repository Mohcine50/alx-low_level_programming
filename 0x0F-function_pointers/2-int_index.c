#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function search for an integer
 * @array: array of int
 * @size: size of array
 * @cmp: function pointer
 * Return: return the index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
