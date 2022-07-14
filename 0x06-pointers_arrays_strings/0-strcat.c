#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: 0 always
 */

char *_strcat(char *dest, char *src)
{
	int i, j, dest_len;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest_len = i;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[dest_len + j] = src[j];
		dest[dest_len + j] = '\0';
	}
	return dest;
}
