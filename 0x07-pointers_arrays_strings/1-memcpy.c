#include "main.h"

/**
 * _memcpy - function that emulates memcpy()
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
