#include <stdio.h>

/**
 * main - Entry point
 * Prints all possible different combinations of three digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);

				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
