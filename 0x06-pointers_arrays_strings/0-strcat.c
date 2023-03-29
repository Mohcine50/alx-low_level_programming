#include "main.h"
/**
 * *_strcat - Conscat two string
 * @dest: first string
 * @src: second string
 * Return: first string concated with second one
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
