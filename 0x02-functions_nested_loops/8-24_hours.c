#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: always 0 (Success)
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
				_putchar('0');
			_putchar(i + 48);
			_putchar(':');
			if (j < 0)
				_putchar('0');
			_putchar(j + 48);
			_putchar('\n');
		}
	}
}
