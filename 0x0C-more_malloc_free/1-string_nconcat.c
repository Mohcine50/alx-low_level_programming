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

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	n = (n >= slen2) ? slen2 : n;
	ptr = (char *)malloc(sizeof(char) * (slen1 + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < slen1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
