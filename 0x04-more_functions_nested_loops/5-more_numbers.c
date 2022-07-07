#include "main.h"

/**
 * more_numbers - print 0-14 in 10 lines
 * Return: 0 Alaways (Success)
 */

void more_numbers(void)
{
	int i, num;
	
	i = 0;
	while (i < 10)
	{
		num = 0;
		while (num < 15)
		{
			_putchar(num);
			num++;
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
