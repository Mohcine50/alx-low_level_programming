#include "main.h"
/**
 * *_strcat - Conscat two string
 * @dest: first string
 * @src: second string
 * Return: first string concated with second one
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*dest != '\0')
	{
		i++;
		dest++;
	}

	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
