#include "main.h"
/**
 * _strncat - concat two string to n bytes
 * @dest: string one
 * @src: string two
 * @n: int byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;
	
	while (*ptr != '\0')
	{
		ptr++;
	}
	
	while (i < n){
		*ptr = src[i];
		i++;
	}
	
	return dest;
}
