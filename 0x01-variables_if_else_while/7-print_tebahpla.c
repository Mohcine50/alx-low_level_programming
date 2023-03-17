#include <stdio.h>

/**
 * main - Entry point
 * prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putch(c);
		c++;
	}
	putch('\n');
	return (0);
}
