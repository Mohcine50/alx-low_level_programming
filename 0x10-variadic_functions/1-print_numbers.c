#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - print all numbes passed in the args
 * @separator: string will be print between numbers
 * @n: args count
 * @...: args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int arg;

	if (n == 0)
		return;
	if (separator == NULL)
		separator = "";

	va_start(args, n);
	
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int); 
		printf("%s%i", separator, arg);
	}
	printf("/n");

	va_end(args);

}
