#include "main.h"

/**
 * _strlen - check the length of a string
 * @s: string
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (i > 9)
		{
			_putchar((i % 10) + '0');
		}
		else
		{
			_putchar(i);
		}
	}
	return (0);
}
