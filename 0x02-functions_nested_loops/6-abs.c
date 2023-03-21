#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number to compute
 * Return: the absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
