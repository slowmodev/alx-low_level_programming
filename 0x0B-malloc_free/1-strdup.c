#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char string
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, n;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; n <= *str; n++)
	{
	}

	n += 1;
	s = malloc(sizeof(char) * n);

	for (i = 0; i < n; i++)
		n[i] = str[i];

	if (s == NULL)
		return (NULL);
	return (s);
}
