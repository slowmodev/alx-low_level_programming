#include "main.h"

/**
 * _isupper - checks if a character is uppercased
 * @c: single character
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= "A" && c <= "Z")
	{
		return (1);
	}
	else
	{
		return (0);
}
