#include "main.h"

/*
 * _islower - Check if the charcter is lower case
 * @ c charcter
 * Return: 1 if c lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
