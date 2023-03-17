#include <stdio.h>

/**
 * main - Entry point
 * Prints all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i < 9)
		{
			putchar(i + 48);
			putchar(',');
			putchar(' ');
		}
		else
			putchar(i + 48);
		i++;
	}
	return (0);
}
