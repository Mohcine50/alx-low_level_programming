#include "main.h"

/**
 * cap_string - Captilizes the string given as parameter
 * @s: the string
 * Return: the captilized string
 */
char *cap_string(char *s)
{
	int i = 1;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[i] += 'A' - 'a';
	}
	while (s[i] != '\0')
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '9' || s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] += 'A' - 'a';
		}
		i++;
	}
	return (s);
}
