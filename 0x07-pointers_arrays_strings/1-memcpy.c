#include "main.h"

/**
 * _memcpy - function that emulates memcpy()
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL)
	{
		return NULL;
	}
	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return dest;
}
