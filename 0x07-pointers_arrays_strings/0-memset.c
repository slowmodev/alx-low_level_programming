#include "main.h"

/**
 * *_memset: function to emulate memset function
 * @s: destination pointer
 * @b: source pointer
 * @n: number of bytes
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b[i];
	}

	return (s);
}
