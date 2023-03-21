#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: number that check
 *
 * Return: 1 if and print + if posive
 * 0 and print 0 if n is zero
 * -1 and - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0')
	return (0);
}
