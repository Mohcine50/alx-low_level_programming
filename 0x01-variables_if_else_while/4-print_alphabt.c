#include <stdio.h>

/**
 * main - Entry point
 * Print all the alphabet in lower case except 'q' and ''e'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != '2')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

