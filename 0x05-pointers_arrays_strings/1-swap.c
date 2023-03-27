#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: pinter to the first integer
 * @b: pointer to the second integer
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
