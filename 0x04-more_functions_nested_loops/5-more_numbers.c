#include "main.h"

/**
 * more_numbers - print 0-14 in 10 lines
 * Return: 0 Alaways (Success)
 */

void more_numbers(void)
{
	int num, i;
	
	i = 0;
	while (i < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
		}
		i++;
		_putchar('\n');
	}
}
