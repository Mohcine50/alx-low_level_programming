#include "main.h"

/**
 * _print_rev_recursion - print a string with recursion in rev
 * @s: string to print
 * Return: none
 */
void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);

	}
}
