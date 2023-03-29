#include "main.h"

/**
 * _strncpy - copy a string from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of elements to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
