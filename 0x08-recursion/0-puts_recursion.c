#include "main.h"

/**
 * _puts_recursion - print a string with recursion
 * @s: string to print
 * Return: none
 */
void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
