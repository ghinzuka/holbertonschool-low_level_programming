#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that multpily two numbers
 * @argv: array
 * @argc: numbers of argv
 * Return: 1 if not ok
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc > 0 && argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
return (0);
}
