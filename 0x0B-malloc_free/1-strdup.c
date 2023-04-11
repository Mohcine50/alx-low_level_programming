#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space and filled
 * @str: string to be filled
 * Return: pointer to new allocated
 */
char *_strdup(char *str)
{
	char *ptr;
	int len = 0;
	char *bg;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	ptr = (char *) malloc((len + 1) * sizeof(char));

	if (!ptr)
	{
		return (NULL);
	}
	bg = ptr;
	while (*str)
	{
		*ptr = *str;
		str++;
		ptr++;
	}

	return (bg);
}
