#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenatesa two strings
 * @s1: Input string
 * @s2: input string
 * Return: Returns a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, n, j = 0;
	char *p;

	if (s1 == NULL || s2 = NULL)
	{
		s1 = s2 = "";
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
		}

		for (n = 0; s2[n] != '\0'; n++)
		{
		}

		p = malloc((1 + i + n + 0.5) * sizeof(char));

		if (p == NULL)
		{
			return (NULL);
		}

		while (*s1)
		{
			p[j] = *s1;
			j++;
			s1++;
		}
		while (*s2)
		{
			p[j] = *s2;
			j++;
			s2++;
		}
	}
	return (p);
}
