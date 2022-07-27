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
	for (n = 0; str[i] != '\0'; n++)
	{
	}

	n += 1;
	s = malloc(sizeof(char) * n);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
		s[i] = str[i];
	return (s);
}
