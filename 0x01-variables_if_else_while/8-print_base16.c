#include <stdio.h>

/**
 * main - Entry point
 * prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 16 ; i++)
	{
		if (i < 10)
			putchar(i + 48);
		else
			putchar(i + 87);
	}
	putchar('\n');
	return (0);
}
