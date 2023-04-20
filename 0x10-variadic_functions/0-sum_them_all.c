#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - summ all of function args
 * @n: number of args
 * @...: list of args
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);	
	}
	va_end(args);

	return (sum);
}
