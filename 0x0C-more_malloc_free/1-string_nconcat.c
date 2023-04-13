#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to take from s2
 * Return: null or concates string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int slen1 = strlen(s1);
	unsigned int slen2 = strlen(s2);
	char *ptr;

	n = (n >= slen2) ? slen2 : n;
	ptr = (char *)malloc(sizeof(char) * (slen1 + n + 1));

	if (s1 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < slen1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n + 1; j++, i++)
	{
		ptr[i] = s2[j];
	}

	return (ptr);
}
