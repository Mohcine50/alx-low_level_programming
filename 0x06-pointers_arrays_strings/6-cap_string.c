#include "main.h"

/**
 * cap_string - Captilizes the string given as parameter
 * @s: the string
 * Return: the captilized string
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[i] += 'a' - 'A';
	}
	while (s[i] != '\0')
	{
		if ((s[i] == ' ' || s[i] == '9'
					|| s[i] == '\n' || s[i] == ','
					|| s[i] == ';'
					|| s[i] == '.' || s[i] == '!'
					|| s[i] == '?' || s[i] == '"'
					|| s[i] == '(' || s[i] == ')'
					|| s[i] == '{' || s[i] == '}')
				&& (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] += 'a' - 'A';
		}
		i++;
	}
	return (s);
}
