#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argc: number of argument
 * @argv: argument
 * Return: 0 or NULL
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		f = get_op_func(argv[2]);
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);

		if (num2 == 0 && (*argv[2] == '%' || *argv[2] == '/'))
		{
			printf("Error\n");
			exit(100);
		}
		if (f == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", f(num1, num2));
		return (0);
	}
}
