#include "main.h"

/**
 * _puts_recursion - print a string with recursion
 * @s: string to print
 * Return: none
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*(s + 1) != '\0')
		_puts_recursion(s + 1);

	_putchar('\n');
}
