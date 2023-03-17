#include <stdio.h>

/**
 * main - Entry point
 * prints all possible combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b;

	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar (a / 10 + '0');
			putchar (a % 10 + '0');
			putchar (' ');
			putchar (b / 10 + '0');
			putchar (b % 10 + '0');
			if (a != 98)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	return (0);
}
