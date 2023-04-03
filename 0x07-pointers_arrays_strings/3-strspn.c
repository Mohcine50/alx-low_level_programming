#include "main.h"

/**
 * _strspn - get the length of prefix substring
 *  @s: string
 *  @accept: substring
 *  Return: number of the ininitial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int found;

	found = 0;
	j = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		found = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				found = 1;
			}
			j++;
		}
		if (found == 0)
			return (i);
		i++;
	}
	return (i);
}
