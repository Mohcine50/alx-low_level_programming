#include "main.h"

/**
 * _isalpha - check if the charcter is aplhabbetic
 * @c: The charcter to check.
 * Return: 1 if the c is lower case or uppercase
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
		return (1);
	return (0);
}
