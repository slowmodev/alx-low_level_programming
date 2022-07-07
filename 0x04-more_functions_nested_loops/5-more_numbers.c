#include "main.h"

/**
 * more_numbers - print 0-14 in 10 lines
 * Return: 0 Alaways (Success)
 */
void more_numbers(void)
{
	int i = 0, j;
	
	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		i++;
		_putchar('\n');
	}
}
