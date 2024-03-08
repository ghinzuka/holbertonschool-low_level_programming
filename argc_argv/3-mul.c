#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that multpily two numbers
 * @argv: array 
 * @argc: numbers of argv
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
	return (1);
}
