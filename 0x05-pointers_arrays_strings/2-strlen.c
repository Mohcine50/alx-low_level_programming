#include "main.h"

/**
 * _strlen - calculate the length to string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int sum;

	while(*s != '\n')
	{
		if (*s >= 'a' && *s <= 'z' || *s >= 'A' && *s <= 'Z')
			sum++;
		s++;
	}
	return (sum);
}
