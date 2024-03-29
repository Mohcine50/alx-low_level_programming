#include "main.h"
#include <stdlib.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: first occurrence's pointer or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
