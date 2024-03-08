#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * main - add two positives number
 * @argc: number of argument
 * @argv: array of argc
 * Return: 0 if ok 1 if not
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int result = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
printf("%d\n", result);
return (0);
}
