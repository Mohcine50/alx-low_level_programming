#include "main.h"

/**
 * _strlen - calculate the length to string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
