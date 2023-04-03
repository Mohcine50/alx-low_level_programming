#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: character
 * @n: number of bytes.
 * Return: pointer to a memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		char[i] = b;
		i++;
	}
	return (s);
}
