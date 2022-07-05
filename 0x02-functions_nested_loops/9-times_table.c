#include "main.h"

/**
 * times_table - multiplacation table of numbers from 0 - 9
 */
void times_table(void)
{
	int i, j, k;

	k = i * j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 0; j++)
		{
			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
