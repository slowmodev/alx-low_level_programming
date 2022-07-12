#include "main.h"

/**
 * _strlen - check the length of a string
 * @s: string
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}
