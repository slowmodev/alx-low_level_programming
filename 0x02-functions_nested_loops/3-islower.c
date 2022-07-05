#include "main.h"

/**
 * _islower - a function that checks if a char is a lowercase alphabet
 * @c: single character input
 * Return: 1 if int c is lowercase, 0 if other
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
