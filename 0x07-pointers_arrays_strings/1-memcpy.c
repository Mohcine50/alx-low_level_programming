#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: destination source
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
