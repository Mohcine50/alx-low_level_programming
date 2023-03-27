#include "main.h"

/**
 * _puts - print str to stdout
 * @str: take a str as input
 * Return: none
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
