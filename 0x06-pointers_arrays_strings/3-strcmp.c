#include "main.h"
/**
 * _strcmp - compare to strings
 * @s1: string 1
 * @s2: string 2
 * Return: none
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
