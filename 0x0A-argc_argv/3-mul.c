#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 * @argc: input
 * @argv: input
 * Return: Always 0
 */
int main(int argc, char *argv)
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%d\n", argv[i]);
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else if (i = 0; argv[i] == 0)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
