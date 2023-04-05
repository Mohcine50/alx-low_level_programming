#include "main.h"

/**
 * _strlen_recursion - calculate string length recursively
 * @s: string
 * Return: int (length)
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
