include "main.h"

/**
 * _strlen - calculate the length to string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int sum;

	while(s != EOF)
	{
		sum++;
	}
	return sum;
}
