#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @n: number that we print his last digit
 *
 * Return: the value of last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
