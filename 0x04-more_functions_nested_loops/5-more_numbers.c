#include "main.h"

/**
 * more_numbers - print 0-14 in 10 lines
 * Return: 0 Alaways (Success)
 */

void more_numbers(void)
{
	int num, i;

	for (num = '0'; num <= '14'; num++)
	{
		for (i = '0'; i < 10; i++)
		{
			_putchar(num);
		}
	_putchar('\n');
	}
}
